# CMakeList.txt : CMake project for escape-the-valley, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (escape-the-valley "escape-the-valley.cpp" "escape-the-valley.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET escape-the-valley PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
