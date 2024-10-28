#include "StringCalculator.cpp"
#include <gtest/gtest.h>

//TEST(TestSuireName, TestCaseName)
TEST(string_calculator_add,when_passed_a_single_number_returns_0_Empty){
//Arrange
string input=""
int expectedValue=0;

//Act
int actualValue=objUnderTest.Add(input);

//Assert
ASSET_EQ(expectedValue, actualValue);
}
