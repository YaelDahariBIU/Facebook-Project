//
// Created by Tal on 12/01/2024.
//
#include <gtest/gtest.h>
#include "bloom_filter.h"

TEST(BFTest, BasicTest) {
    ASSERT_EQ(bf_main(), 0);
}

