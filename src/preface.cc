#include "preface.hh"
#include <algorithm>
#include <queue>

int elemalg::minfree(std::vector<int>& xs) {
  int l=0, i=0;
  int n = xs.size();
  int u = n - 1;

  while (n) {
    int m = (l+u) / 2;
    int right, left = 0;

    for (right = 0; right < n; ++right) {
      if (xs[i+right] <= m) {
        std::swap(xs[i+left], xs[i+right]);
        ++left;
      }
    }

    if (left == m - l + 1) {
      i += left;
      n -= left;
      l = m + 1;
    }
    else {
      n = left;
      u = m;
    }
  }

  return l;
}

elemalg::bigint elemalg::number(int n) {
  if (n==1) return 1;

  std::queue<bigint> q2, q3, q5;
  q2.push(2);
  q3.push(3);
  q5.push(5);

  bigint x;
  while (--n > 1) {
    x = std::min(std::min(q2.front(), q3.front()), q5.front());
    if (x == q2.front()) {
      q2.pop();
      q2.push(x*2);
      q3.push(x*3);
      q5.push(x*5);
    }
    else if (x == q3.front()) {
      q3.pop();
      q3.push(x*3);
      q5.push(x*5);
    }
    else {
      q5.pop();
      q5.push(x*5);
    }
  }

  return x;
}
