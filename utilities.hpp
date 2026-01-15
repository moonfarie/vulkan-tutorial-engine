#pragma once

#include <filesystem>
#include <vector>

namespace engine {

namespace utilities {

std::vector<char> read_file_as_char_vec(const std::filesystem::path& path);

}  // namespace utilities

}  // namespace engine
