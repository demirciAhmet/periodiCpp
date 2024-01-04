# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/qtwDeneme-quiz_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/qtwDeneme-quiz_autogen.dir/ParseCache.txt"
  "qtwDeneme-quiz_autogen"
  )
endif()
