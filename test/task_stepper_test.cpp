
#include <gtest/gtest.h>
#include <TaskStepper.h>

TEST(TaskStepper, stepping) {

  std::unique_ptr<TaskStepper> taskStepper(new TaskStepper);
  auto *waterPumpActivator = new WaterPumpActivator();
  taskStepper->addTask(0, waterPumpActivator);
  Environment environment{0.23, 0.24, 0.25};
  EXPECT_TRUE(taskStepper->makeStep(environment));
}

