// gtclang (0.0.1-7c1cfe1-x86_64-linux-gnu-8.3.0)
// based on LLVM/Clang (6.0.1), Dawn (0.0.1)
// Generated on 2019-11-12  15:19:08

#define GRIDTOOLS_CLANG_GENERATED 1
#define GRIDTOOLS_CLANG_BACKEND_T CXXNAIVE
#ifndef BOOST_RESULT_OF_USE_TR1
#define BOOST_RESULT_OF_USE_TR1 1
#endif
#ifndef BOOST_NO_CXX11_DECLTYPE
#define BOOST_NO_CXX11_DECLTYPE 1
#endif
#ifndef GRIDTOOLS_CLANG_HALO_EXTEND
#define GRIDTOOLS_CLANG_HALO_EXTEND 3
#endif
#ifndef BOOST_PP_VARIADICS
#define BOOST_PP_VARIADICS 1
#endif
#ifndef BOOST_FUSION_DONT_USE_PREPROCESSED_FILES
#define BOOST_FUSION_DONT_USE_PREPROCESSED_FILES 1
#endif
#ifndef BOOST_MPL_CFG_NO_PREPROCESSED_HEADERS
#define BOOST_MPL_CFG_NO_PREPROCESSED_HEADERS 1
#endif
#ifndef GT_VECTOR_LIMIT_SIZE
#define GT_VECTOR_LIMIT_SIZE 30
#endif
#ifndef BOOST_FUSION_INVOKE_MAX_ARITY
#define BOOST_FUSION_INVOKE_MAX_ARITY GT_VECTOR_LIMIT_SIZE
#endif
#ifndef FUSION_MAX_VECTOR_SIZE
#define FUSION_MAX_VECTOR_SIZE GT_VECTOR_LIMIT_SIZE
#endif
#ifndef FUSION_MAX_MAP_SIZE
#define FUSION_MAX_MAP_SIZE GT_VECTOR_LIMIT_SIZE
#endif
#ifndef BOOST_MPL_LIMIT_VECTOR_SIZE
#define BOOST_MPL_LIMIT_VECTOR_SIZE GT_VECTOR_LIMIT_SIZE
#endif
#include "gridtools/clang_dsl.hpp"
using namespace gridtools::clang;

namespace dawn_generated {
namespace cxxnaive {

class test {
private:
  struct stencil_17 {
    // Members

    // Temporary storages
    using tmp_halo_t = gridtools::halo<GRIDTOOLS_CLANG_HALO_EXTEND, GRIDTOOLS_CLANG_HALO_EXTEND, 0>;
    using tmp_meta_data_t = storage_traits_t::storage_info_t<0, 3, tmp_halo_t>;
    using tmp_storage_t = storage_traits_t::data_store_t<float_type, tmp_meta_data_t>;
    const gridtools::clang::domain m_dom;

    // Input/Output storages
  public:
    stencil_17(const gridtools::clang::domain& dom_) : m_dom(dom_) {}

    void run(storage_ijk_t& in_, storage_ijk_t& out_) {
      in_.sync();
      out_.sync();
      {
        gridtools::data_view<storage_ijk_t> in = gridtools::make_host_view(in_);
        std::array<int, 3> in_offsets{0, 0, 0};
        gridtools::data_view<storage_ijk_t> out = gridtools::make_host_view(out_);
        std::array<int, 3> out_offsets{0, 0, 0};
        for(int k = 0 + 0;
            k <= (m_dom.ksize() == 0 ? 0 : (m_dom.ksize() - m_dom.kplus() - 1)) + 0 + 0; ++k) {
          for(int i = m_dom.iminus() + 0; i <= m_dom.isize() - m_dom.iplus() - 1 + 0; ++i) {
            for(int j = m_dom.jminus() + 0; j <= m_dom.jsize() - m_dom.jplus() - 1 + 0; ++j) {
              out(i + 0, j + 0, k + 0) = in(i + 0, j + 0, k + 0);
            }
          }
          for(int i = m_dom.iminus() + 0; i <= m_dom.isize() - m_dom.iplus() - 1 + 0; ++i) {
            for(int j = m_dom.jminus() + 0; j <= m_dom.jsize() - m_dom.jplus() - 1 + 0; ++j) {
              out(i + 0, j + 0, k + 0) = (int)0;
            }
          }
        }
      }
      in_.sync();
      out_.sync();
    }
  };
  static constexpr const char* s_name = "test";
  stencil_17 m_stencil_17;

public:
  test(const test&) = delete;

  test(const gridtools::clang::domain& dom) : m_stencil_17(dom) {}

  void run(storage_ijk_t in, storage_ijk_t out) {
    m_stencil_17.run(in, out);
    ;
  }
};
} // namespace cxxnaive
} // namespace dawn_generated
