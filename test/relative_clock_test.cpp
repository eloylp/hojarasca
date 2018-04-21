
#include <gtest/gtest.h>
#include <RelativeClock.h>

TEST(RelativeClock, test) {
  std::unique_ptr<RelativeClock> calculator(new RelativeClock);
  EXPECT_EQ(4, 4);
}

