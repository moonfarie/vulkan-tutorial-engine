#pragma once

#include <filesystem>

namespace cfd {

namespace render {

class Pipeline {
 public:
  Pipeline(const std::filesystem::path& vertex_shader_path,
           const std::filesystem::path& fragment_shader_path);

 private:
  void create(const std::filesystem::path& vertex_shader_path,
              const std::filesystem::path& fragment_shader_path);
};

}  // namespace render

}  // namespace cfd
