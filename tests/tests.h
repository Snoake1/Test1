#ifndef TEST_H
#define TEST_H

#include <gtest/gtest.h>
#include <math.h>

extern "C"{
#include "myfunc.h"
}

TEST(roots, tworoots)
{
    double x1 = 0, x2 = 0;
    ASSERT_EQ(2, solution(1, 6, 5, &x1, &x2));
    ASSERT_EQ(-1.0,x1);
    ASSERT_EQ(-5.0,x2);
}

TEST(roots, oneroot)
{
    double x1 = 0, x2 = 0;
    ASSERT_EQ(1, solution(1, 2, 1, &x1, &x2));
    ASSERT_EQ(-1.0, x1);
    ASSERT_EQ(0.0, x2);
}

TEST(roots, oneroot2)
{
    double x1 = 0, x2 = 0;
    ASSERT_EQ(1, solution(0, 3, -3, &x1, &x2));
    ASSERT_EQ(1.0,x1);
    ASSERT_EQ(0.0,x2);
}

TEST(roots, noroots)
{
    double x1 = 0, x2 = 0;
    ASSERT_EQ(-1, solution(0, 0, 3, &x1, &x2));
    ASSERT_EQ(0.0, x1);
    ASSERT_EQ(0.0, x2);
}

TEST(roots, noroots2)
{
    double x1 = 0, x2 = 0;
    ASSERT_EQ(-1, solution(1, 1, 3, &x1, &x2));
    ASSERT_EQ(0.0, x1);
    ASSERT_EQ(0.0, x2);
}

TEST(roots, tworoots2)
{
    double x1 = 0, x2 = 0;
    ASSERT_EQ(2, solution(1,7,11, &x1, &x2));
    ASSERT_LT(-3.0, x1);
    ASSERT_GT(-4.0, x2);
}

TEST(returnvalue, nosolab)
{
    double x1 = 0, x2 = 0;
    ASSERT_EQ(-1, solution(0, 0, 0, &x1, &x2));
    ASSERT_EQ(0.0, x1);
    ASSERT_EQ(0.0, x2);
}

#endif
