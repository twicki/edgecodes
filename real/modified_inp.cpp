#include "gridtools/clang_dsl.hpp"
using namespace gridtools::clang;

stencil test {
  storage in, out;
  Do {
    compute_domain() {
      // copy fields
      out = in;
    }
    compute_domain(i_start, i_start + 1) {
      // correct edges
      out = 0;
    }
  }
};