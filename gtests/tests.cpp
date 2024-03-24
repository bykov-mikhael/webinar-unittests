#include <gtest/gtest.h>

#include "checkcardnum.h"

TEST(TestCheckCardNum123, correct_visa123) {
    int i1{1};
    int i2{1};
    ASSERT_TRUE(retBool(i1, i2));
}

TEST(TestCheckCardNum, correct_visa) {
    ASSERT_TRUE(checkcardnum("4561261212345467"));
}

TEST(TestCheckCardNum, incorrect_visa) {
    ASSERT_FALSE(checkcardnum("4561261212345465"));
}

TEST(TestCheckCardNum, skip_spaces) {
    ASSERT_TRUE(checkcardnum("4561 2612 1234 5467"));
}

