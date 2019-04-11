#include "preface.hh"
#include <iostream>

int main() {
  std::vector<int> xs = { 18, 4, 8, 9, 16, 1, 14, 7, 19, 3, 0, 5, 2, 11, 6};
  std::cout << elemalg::minfree(xs) << std::endl;
}
