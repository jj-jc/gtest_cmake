#include <gtest/gtest.h>

TEST(ExampleTests, DemonstrateGTestMacros){
    EXPECT_TRUE(true);
    EXPECT_EQ(true, true);
    EXPECT_EQ(true, false);
}

TEST(ExampleTests, Demonstrate){
    EXPECT_TRUE(true);
}