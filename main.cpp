#include <iostream>
#include <string>
#include <set>
#include <vector>

#define TEST_CASE(index, result) std::cout << "TEST CASE #" << index << ": "; std::cout << (result ? "PASS" : "! FAIL") << std::endl;

// Hint: Fib(0) = 0, Fib(1) = 1
// Hint: Fib(n) = Fib(n-1) + Fib(n-2)
// Fibonacci series: 0, 1, 1, 2, 3, 5, 8, 13, 21…

// Return the sum of the first n numbers in the Fibonacci sequence,
// which begins with 0 and 1 as the first two terms
int CalcSumOfFirstNFibonacciNumbers(int n)
{
    return 0;
}

void RunTestCases()
{
    TEST_CASE(1, CalcSumOfFirstNFibonacciNumbers(0) == 0);
    TEST_CASE(2, CalcSumOfFirstNFibonacciNumbers(1) == 0);
    TEST_CASE(3, CalcSumOfFirstNFibonacciNumbers(2) == 1);
    TEST_CASE(4, CalcSumOfFirstNFibonacciNumbers(3) == 3);
    TEST_CASE(5, CalcSumOfFirstNFibonacciNumbers(4) == 4);
    TEST_CASE(6, CalcSumOfFirstNFibonacciNumbers(5) == 7);
}
 
int main(int argc, char *argv[])
{
    RunTestCases();

    return EXIT_SUCCESS;
}
