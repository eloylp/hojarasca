
#include <gtest/gtest.h>
#include <HojarascaFactory.h>

TEST(Hojarasca, isRunningByDefault) {

  auto hojarasca = HojarascaFactory::get(1);
  EXPECT_EQ(true, hojarasca->isRunning());

}

TEST(Hojarasca, systemShutdownFlag) {

  auto hojarasca = HojarascaFactory::get(1);
  hojarasca->disable();
  EXPECT_EQ(false, hojarasca->isRunning());

}

TEST(Hojarasca, systemShutdownFlagAfterEnabled) {

  auto hojarasca = HojarascaFactory::get(1);
  hojarasca->disable();
  hojarasca->enable();
  EXPECT_EQ(true, hojarasca->isRunning());

}

TEST(Hojarasca, roundLimit) {

  auto hojarasca = HojarascaFactory::get(1, 1);
  hojarasca->run();
  EXPECT_EQ(false, hojarasca->isRunning());

}
