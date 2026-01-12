#pragma once

#include "pipeline.hpp"
#include "window.hpp"

namespace cfd {

class App {
 public:
  App(int width, int height, const std::string& title);
  ~App() = default;

  void run() const;

 private:
  Window window_;
  render::Pipeline pipeline{"shaders/shader.vert.spv", "shaders/shader.frag.spv"};
};

}  // namespace cfd
