#include "StringCalculator.cpp"
#include <gtest/gtest.h>

//TEST(TestSuireName, TestCaseName)
TEST(string_calculator_add,when_passed_a_single_number_returns_0_Empty){
//Arrange
StringCalculator objUnderTest;
String input="";
int expectedValue=0;

//Act
int actualValue=objUnderTest.Add(input);

//Assert
ASSERT_EQ(expectedValue, actualValue);
}

TEST(string_calculator_add,when_passed_a_single_number_returns_0_for_Zero){
StringCalculator objUnderTest;
String input ="0"
int expectedvalue= 0;
  int actualValue = objUndertest.Add(input);
ASSERT_EQ(expectedValue, actualValue);
}

TEST(string_calculator_add,when_passed_a_single_number_returns_1_for_One){
StringCalculator objUnderTest;
String input ="1"
int expectedvalue= 1;
  int actualValue = objUndertest.Add(input);
ASSERT_EQ(expectedValue, actualValue);
}

TEST(string_calculator_add,when_passed_multiple_comma_delimited_numbers_returns_their_sum){
StringCalculator objUnderTest;
String input ="1,2,3"
int expectedvalue = 6;
 int actualValue = objUndertest.Add(input); 
ASSERT_EQ(expectedValue, actualValue);
}

TEST(string_calculator_add,when_delimited_with_newline_and_comma_returns_their_sum){
StringCalculator objUnderTest;
String input ="1\n2,3"
int expectedvalue = 6;
 int actualValue = objUndertest.Add(input); 
ASSERT_EQ(expectedValue, actualValue);
}

TEST(string_calculator_add,when_passed_a_delimiter_returns_their_sum_based_on_that_delimiter){
StringCalculator objUnderTest;
String input ="//;\n1,2"
int expectedvalue = 3;
 int actualValue = objUndertest.Add(input); 
ASSERT_EQ(expectedValue, actualValue);
}

TEST(string_calculator_add,when_passed_negative_numbers_throws_an_expection_listing_invalid_values){
StringCalculator objUnderTest;
String input ="1,-2,-4,5"
int expectedvalue = 6;
throw std::ninvalid_argument("I am thrown an invalid_argument");
int actualValue = objUndertest.Add(input); 
ASSERT_THROW(actualValue, std::invalid_argument);
}

TEST(string_calculator_add,when_passed_numbers_over_1000_ignore_them){
StringCalculator objUnderTest;
String input ="42,1001,3"
int expectedvalue = 45;
 int actualValue = objUndertest.Add(input); 
ASSERT_EQ(expectedValue, actualValue);
}

TEST(string_calculator_add,when_passed_multicharacter_delimiter_uses_that_delimiter_to_sum_values){
StringCalculator objUnderTest;
String input ="//[***]\n8***2***3"
int expectedvalue = 13;
 int actualValue = objUndertest.Add(input); 
ASSERT_EQ(expectedValue, actualValue);
}

TEST(string_calculator_add,when_passed_multiple_delimiters_sums_on_each_delimiter){
StringCalculator objUnderTest;
String input ="//[*][%]\n4*2%3"
int expectedvalue = 9;
 int actualValue = objUndertest.Add(input); 
ASSERT_EQ(expectedValue, actualValue);
}

TEST(string_calculator_add,when_passed_multiple_multicharacter_delimiters_sums_on_each_delimiter){
StringCalculator objUnderTest;
String input ="//[**][%^]\n4**1%^9"
int expectedvalue = 14;
 int actualValue = objUndertest.Add(input); 
ASSERT_EQ(expectedValue, actualValue);
}
