
include_directories(../src)
add_subdirectory(googletest/googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
add_executable(testing main.cpp calculator_test.cpp ../src/Calculator.cpp)
target_link_libraries(testing gtest gtest_main)
add_test(testing testing)
