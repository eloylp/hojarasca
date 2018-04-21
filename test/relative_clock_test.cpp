
#include <gtest/gtest.h>
#include <RelativeClock.h>

TEST(RelativeClock, test) {
  std::unique_ptr<RelativeClock> relativeClock(new RelativeClock);
  EXPECT_EQ(1, relativeClock->count());
}

