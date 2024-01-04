# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/LearnSection_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/LearnSection_autogen.dir/ParseCache.txt"
  "LearnSection_autogen"
  )
endif()
