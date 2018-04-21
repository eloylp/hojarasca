

add_subdirectory(googletest/googletest)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
set(SOURCES main.cpp calculator_test.cpp ../src/Calculator.cpp)
add_executable(testing ${SOURCES})
target_include_directories(testing PRIVATE ../src)
target_link_libraries(testing gtest gtest_main)
add_test(testing testing)
