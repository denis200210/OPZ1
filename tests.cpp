#include "gtest/gtest.h"
#include <iostream>
#include "Function.h"

using namespace std;

TEST(in, input) {
    //Сложение
    short n = 0;
    string s = "1+2+5+9";
    SizeTree(s, n);
    testing::internal::CaptureStdout();
    while (n != 7) {
        cout << string[size_term];
        n++;
    }
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "1259+++");

    //Вычитание
    n = 0;
    string s = "1-2-5-7-1";
    SizeTree(s, n);
    testing::internal::CaptureStdout();
    while (n != 9) {
        cout << string[size_term];
        n++;
    }
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "12-5-7-1-");

    //Умножение
    n = 0;
    string s = "6*2*5*9";
    SizeTree(s, n);
    testing::internal::CaptureStdout();
    while (n != 7) {
        cout << string[size_term];
        n++;
    }
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "62*5*9*");

    //Деление
    n = 0;
    string s = "7/2/3";
    SizeTree(s, n);
    testing::internal::CaptureStdout();
    while (n != 5) {
        cout << string[size_term];
        n++;
    }
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "72/3/");

    //
    n = 0;
    string s = "1+3-4+2*7-3/4*7+1";
    SizeTree(s, n);
    testing::internal::CaptureStdout();
    while (n != 17) {
        cout << string[size_term];
        n++;
    }
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "134-27*34/7*-1+++");

    //Скобки
    n = 0;
    string s = "7-3+5*(6+1/(2*4-5)-8)+7";
    SizeTree(s, n);
    testing::internal::CaptureStdout();
    while (n != 19) {
        cout << string[size_term];
        n++;
    }
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "73-56124*5-/8-+*7++");
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}