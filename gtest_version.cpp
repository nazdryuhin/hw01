#include<gtest/gtest.h>

#include"lib.h"

TEST (gtest_version, gtest_valid_version) {
    EXPECT_TRUE (version() > 0);
}
