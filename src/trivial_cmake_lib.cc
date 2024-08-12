#include "trivial_cmake_lib.h"

#ifndef TRIVIAL_CMAKE_LIB_ADD_TO_SUM
int trivial_cmake_lib_add(int a, int b) {
  return a + b;
}
#else
int trivial_cmake_lib_add(int a, int b) {
  return a + b + TRIVIAL_CMAKE_LIB_ADD_TO_SUM;
}
#endif  // TRIVIAL_CMAKE_LIB_ADD_TO_SUM
