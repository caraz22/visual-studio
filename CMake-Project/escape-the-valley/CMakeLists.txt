cmake_minimum_required(VERSION 3.12)
project(escape-the-valley)

target_include_directories(escape-the-valley PRIVATE include)

# Add source to this project's executable.
add_executable (escape-the-valley 
	"src/main.cpp" 
	"src/farmer/Player.cpp"
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET escape-the-valley PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.