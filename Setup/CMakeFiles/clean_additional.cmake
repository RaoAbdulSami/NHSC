# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\NInjaHexSumCalculator_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\NInjaHexSumCalculator_autogen.dir\\ParseCache.txt"
  "NInjaHexSumCalculator_autogen"
  )
endif()
