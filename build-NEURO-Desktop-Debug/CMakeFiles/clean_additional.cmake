# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\NEURO_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\NEURO_autogen.dir\\ParseCache.txt"
  "NEURO_autogen"
  )
endif()
