# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/periodiCpp_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/periodiCpp_autogen.dir/ParseCache.txt"
  "periodiCpp_autogen"
  )
endif()
