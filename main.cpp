#include <exception>
#include <iostream>

#include "app.hpp"

int main() {
  engine::App app(800, 600, "Vulkan Tutorial Engine");

  try {
    app.run();
  } catch (const std::exception& err) {
    std::cerr << err.what() << '\n';
  }

  return 0;
}
