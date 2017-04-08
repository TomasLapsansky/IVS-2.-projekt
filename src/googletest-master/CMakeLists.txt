cmake_minimum_required(VERSION 2.6.4)

project(ivs_proj_2)

enable_testing()

option(BUILD_GTEST "Builds the googletest subproject" OFF)

#Note that googlemock target already builds googletest
option(BUILD_GMOCK "Builds the googlemock subproject" ON)

if(BUILD_GMOCK)
  add_subdirectory( googlemock )
elseif(BUILD_GTEST)
  add_subdirectory( googletest )
endif()

add_executable(tdd_test ../math_library.cpp tdd_tests.cpp)
target_link_libraries(tdd_test gtest_main)