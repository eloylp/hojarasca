
add_subdirectory(googletest/googletest)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
set(SUT_DIR ../src)
set(SOURCES main.cpp task_stepper_test.cpp
        ${SUT_DIR}/EnvironmentChecker.cpp ${SUT_DIR}/EnvironmentChecker.h
        ${SUT_DIR}/TaskStepper.cpp ${SUT_DIR}/TaskStepper.h
        ${SUT_DIR}/Tasks.h ${SUT_DIR}/Tasks.cpp
        hojarasca_test.cpp)
add_executable(testing ${SOURCES})
target_include_directories(testing PRIVATE ${SUT_DIR})
target_link_libraries(testing gtest gtest_main)
add_test(testing testing)
