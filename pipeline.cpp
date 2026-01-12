#include "pipeline.hpp"

#include <iostream>

#include "utilities.hpp"

namespace cfd {

namespace render {

Pipeline::Pipeline(const std::filesystem::path& vertex_shader_path,
                   const std::filesystem::path& fragment_shader_path) {
  create(vertex_shader_path, fragment_shader_path);
}

void Pipeline::create(const std::filesystem::path& vertex_shader_path,
                      const std::filesystem::path& fragment_shader_path) {
  const auto vertex_shader_code = utilities::read_file_as_char_vec(vertex_shader_path);
  const auto fragment_shader_code = utilities::read_file_as_char_vec(fragment_shader_path);

  std::cout << "vertex_shader_code size: " << vertex_shader_code.size()
            << "\nfragment_shader_code size: " << fragment_shader_code.size() << '\n';
}

}  // namespace render

}  // namespace cfd
