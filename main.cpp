#include <iostream>
#include <string>

int testCaseIndex = 0;
#define TEST_CASE(result) std::cout << "TEST CASE #" << ++testCaseIndex << ": "; std::cout << (result ? "PASS" : "!FAIL") << std::endl;

// Hint: Fib(0) = 0
// Hint: Fib(1) = 1
// Hint: Fib(n) = Fib(n-1) + Fib(n-2)
// Hint: Fibonacci series: 0, 1, 1, 2, 3, 5, 8, 13, 21…

// Returns the sum of the first n numbers in the Fibonacci sequence
int CalcSumOfFirstNFibonacciNumbers(int n)
{
    return 0;
}

void RunTestCases()
{
    TEST_CASE(CalcSumOfFirstNFibonacciNumbers(0) == 0);
    TEST_CASE(CalcSumOfFirstNFibonacciNumbers(1) == 0);
    TEST_CASE(CalcSumOfFirstNFibonacciNumbers(2) == 1);
    TEST_CASE(CalcSumOfFirstNFibonacciNumbers(3) == 2);
    TEST_CASE(CalcSumOfFirstNFibonacciNumbers(4) == 4);
    TEST_CASE(CalcSumOfFirstNFibonacciNumbers(5) == 7);
}

int main()
{
    RunTestCases();
}
