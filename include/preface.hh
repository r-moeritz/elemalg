#ifndef PREFACE_HH
#define PREFACE_HH

#include <vector>
#include <cstdint>

namespace elemalg {
  using bigint=std::uintmax_t;

  int minfree(std::vector<int>& xs);
  bigint number(int n);
}

#endif // #ifndef PREFACE_HH
