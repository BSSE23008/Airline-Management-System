#pragma once // header guard 

#include <filesystem>

namespace ProjectPaths
{
   inline const std::filesystem::path ROOT = std::filesystem::current_path();
   
   // indeline is used to make the variable a compile-time constant
   // 

   inline std::string get(const std::string& rel = "")
   {
      return (ROOT / rel).string(); // std::filesystem::path overload operator/ to concatenate paths
   }
}