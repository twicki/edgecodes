#include "gridtools/clang_dsl.hpp"
using namespace gridtools::clang;

stencil test {
  storage in, out;
  Do {
    vertical_region(k_start, k_end) {
      // copy fields
      out = in;
    }
    vertical_region(k_start, k_end) {
      // correct edges
      out = 0;
    }
  }
};