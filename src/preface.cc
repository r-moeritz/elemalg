#include "preface.hh"
#include <algorithm>

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
