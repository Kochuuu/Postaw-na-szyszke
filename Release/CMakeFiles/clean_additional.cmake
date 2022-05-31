# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\PostawNaSzyszkeApp_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\PostawNaSzyszkeApp_autogen.dir\\ParseCache.txt"
  "PostawNaSzyszkeApp_autogen"
  )
endif()
