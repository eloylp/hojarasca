
#include <gtest/gtest.h>
#include <TaskStepper.h>

TEST(TaskStepper, testStepForward) {
  std::unique_ptr<TaskStepper> taskStepper(new TaskStepper);
  EXPECT_EQ(1, taskStepper->makeStep());
  EXPECT_EQ(2, taskStepper->makeStep());
}

