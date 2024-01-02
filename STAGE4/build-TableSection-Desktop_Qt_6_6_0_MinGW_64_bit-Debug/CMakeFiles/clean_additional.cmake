# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TableSection_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TableSection_autogen.dir\\ParseCache.txt"
  "TableSection_autogen"
  )
endif()
