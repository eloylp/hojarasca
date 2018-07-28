
#include <gtest/gtest.h>
#include <TaskStepper.h>

TEST(TaskStepper, testStepForward) {
  std::unique_ptr<TaskStepper> taskStepper(new TaskStepper);
  GroundEnvironment environment{0.23, 0.24, 0.25};

  EXPECT_EQ(1, taskStepper->makeStep(&environment));
  EXPECT_EQ(2, taskStepper->makeStep(&environment));
}

