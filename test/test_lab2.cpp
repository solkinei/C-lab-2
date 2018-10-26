#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"
#include "task6.h"

#include "gtest/gtest.h"

TEST(task1, bomb_height)
{
	ASSERT_NEAR(4995.1,height(1,5000),0.1);
	ASSERT_NEAR(4509.5,height(10,5000),0.1);
        ASSERT_NEAR(286.3,height(31,5000),0.1);
}


TEST(task2, check_turn)
{
	ASSERT_EQ(0,turn(60,60));
      	ASSERT_LT(0,turn(70,60));
        ASSERT_GT(0,turn(30,60));
}


TEST(task3, triange)
{
        char buf[256];
        ASSERT_STREQ("  *",layout(buf,1,3));
        ASSERT_STREQ(" ***",layout(buf,2,3));
	ASSERT_STREQ("*****",layout(buf,3,3));
	
}

TEST(task4, check_permutation)
{
        char buf[512]="a1b2c3d4e";
	ASSERT_STREQ("aebdc3241",process(buf));
}

TEST(task6, clear)
{
    char buf[]="    qwer    ty uio p  ";
    ASSERT_STREQ("qwer ty uio p",clear(buf));
}
