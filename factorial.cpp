#include <iostream>

using namespace std;

/*
 * Factorial
 * the product of all positive integers less than or equal 
 * to a given positive integer and denoted by that integer 
 * and an exclamation point (!)
 * 
 * n! = n * (n-1) * (n-2) * ... * 1
 * 
 * For example, 7! = 7 * 6 * 5 * 4 * 3 * 2 * 1 
 * 
 * Factorial zero is defined as equal to 1.
*/


// Iterative Factorial
long IterativeFactorial( int n)
{
    long total = 1;
    for (int i=1; i<= n; i++){
        total *= i; 
    }
    // YOUR CODE HERE
    return total; //Dummy Return
}


// Recursive Factorial
long RecursiveFactorial( int n)
{
    // base case
    if (n <= 1) return 1;
    // recursive case
    return n * RecursiveFactorial( n -1 ); //Dummy Return
}


int main()
{
    // Test Iterative Factorial Function
    for (int k = 0; k < 20; k++)
    {
        cout << "IterativeFactorial(" << k << ") = " << IterativeFactorial(k) << endl;
    }

    cout << endl ;

    // Test Recursive Factorial Function
    for (int k = 0; k < 20; k++)
    {
        cout << "RecursiveFactorial(" << k << ") = " << RecursiveFactorial(k) << endl;
    }

}