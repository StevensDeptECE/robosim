cmake_minimum_required(VERSION 3.16.1)

project(
  Robosim
  VERSION 0.1.0
  DESCRIPTION "This project is a robot simulator designed so new developers in my graduate C++ class can learn to create a single program using git and fork. The result will be a simplified GPS-like localization model, useful for theoretical analysis of localization algorithms"
  LANGUAGES C CXX)

set(CMAKE_BINARY_DIR ${PROJECT_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/libs)
set(CMAKE_FILES_DIRECTORY build)
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/modules)
set(CMAKE_CXX_STANDARD 20)
option(CMAKE_CXX_STANDARD_REQUIRED ON)
option(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS
    ON
    CACHE INTERNAL "")
option(CMAKE_LINK_WHAT_YOU_USE ON)
option(ROBOSIM_EXTRA_DEBUG_WARNINGS OFF)
option(ROBOSIM_WERROR OFF)
set(CMAKE_DEBUG_POSTFIX d)

string(TOLOWER "${CMAKE_BUILD_TYPE}" build_type_lower)

# Set a default build type if none was specified
set(default_build_type "Release")
if(EXISTS "${CMAKE_SOURCE_DIR}/.git")
  set(default_build_type "Debug")
endif()

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  message(
    STATUS
      "Setting build type to '${default_build_type}' as none was specified.")
  set(CMAKE_BUILD_TYPE
      "${default_build_type}"
      CACHE STRING "Choose the type of build." FORCE)
  # Set the possible values of build type for cmake-gui
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release"
                                               "MinSizeRel" "RelWithDebInfo")
endif()

# BUG: This will more than likely not behave how we want it to with
# multi-configuration generators https://stackoverflow.com/a/24470998
message(STATUS "Build mode: ${CMAKE_BUILD_TYPE}")
if(build_type_lower MATCHES "debug")
  message(STATUS "Building shared libs")
  option(BUILD_SHARED_LIBS ON)
else()

  set(CMAKE_POSITION_INDEPENDENT_CODE ON)
  include(CheckIPOSupported)
  check_ipo_supported(RESULT supported OUTPUT error)

  if(supported)
    message(STATUS "IPO / LTO enabled")
    set(TARGET robosim PROPERTY INTERPROCEDURAL_OPTIMIZATION TRUE)
  else()
    message(STATUS "IPO / LTO not supported: <${error}>")
  endif()
endif()

if(ROBOSIM_EXTRA_DEBUG_WARNINGS)
  if(MSVC)
    # warning level 4
    add_compile_options(/W4)
  else()
    # lots of warnings
    add_compile_options(-Wall -Wextra)
  endif()
endif()

if(ROBOSIM_WERROR)
  # all warnings are errors
  if(MSVC)
    add_compile_options(/WX)
  else()
    add_compile_options(-Werror)
  endif()
endif()

add_executable(robosim airplane.cc beacon.cc boat.cc car.cc main.cc robot.cc submarine.cc world.cc vec_3d.cc)