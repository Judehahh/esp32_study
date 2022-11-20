# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/jude/esp/esp-idf/components/bootloader/subproject"
  "/Users/jude/esp/weather/build/bootloader"
  "/Users/jude/esp/weather/build/bootloader-prefix"
  "/Users/jude/esp/weather/build/bootloader-prefix/tmp"
  "/Users/jude/esp/weather/build/bootloader-prefix/src/bootloader-stamp"
  "/Users/jude/esp/weather/build/bootloader-prefix/src"
  "/Users/jude/esp/weather/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/jude/esp/weather/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/jude/esp/weather/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
