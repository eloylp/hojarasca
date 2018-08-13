cmake_minimum_required(VERSION 3.2)

set(SUT_DIR ../src)

add_subdirectory(googletest)
enable_testing()
set(BUILD_GTEST 1)
set(SOURCES main.cpp task_stepper_test.cpp
        ${SUT_DIR}/EnvironmentChecker.cpp ${SUT_DIR}/EnvironmentChecker.h
        ${SUT_DIR}/TaskStepper.cpp ${SUT_DIR}/TaskStepper.h
        ${SUT_DIR}/Tasks.h ${SUT_DIR}/Tasks.cpp)
add_executable(testing ${SOURCES})
target_include_directories(testing PRIVATE ${SUT_DIR})
target_link_libraries(testing gtest gtest_main)
add_test(testing testing)
