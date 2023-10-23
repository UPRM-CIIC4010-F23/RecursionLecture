#include <iostream>

using namespace std;

/*
 * Fibonacci sequence
 * sequence of numbers:  0, 1, 1, 2, 3, 5, 8, 13, 21, …,
 * 
 * The sequence of numbers where the first two numbers are 0 and 1, 
 * with each subsequent number being defined as the sum of the previous 
 * two numbers in the sequence.
 * 
 * note: the input parameter is the position in the sequence
 * 
 * the nth Fibonacci number F(n) = F(n − 1) + F(n − 2).
 * F(0) = 0
 * F(1) = 1
*/


// Recursive Fibonacci
long RecursiveFibonacci(long n)
{
    if(n==0) return 0;
    if(n==1) return 1;

    // YOUR CODE HERE
    return RecursiveFibonacci(n-1) + RecursiveFibonacci(n-2); //Dummy Return
}

// Iterative Fibonacci
long IterativeFibonacci( long n)
{
    // YOUR CODE HERE
    long n0 = 0;
    long n1 = 1;
    long n2 = 0;

    for (int i=0; i < n; i++){
        n2 = n0+n1;
        n0 = n1;
        n1 = n2;
    }

    return n2; //Dummy Return
}

// Recursive Fibonacci with Helper Function
long FibonacciHelper(long f0, long f1, long n)
{   
    // base case
    if(n==0) return 0;
    if(n==1) return f1+f0;
    // recursive case
    return FibonacciHelper(f1,f1+f0, n-1); //Dummy Return
}

long RecursiveFibonacci2(long n)
{
    // YOUR CODE HERE
    return FibonacciHelper(0, 1, n); //Dummy Return
}


int main()
{

    // // Test Recursive Fibonacci Function
    // for (int k = 0; k < 100; k++)
    // {
    //     cout << "RecursiveFibonacci(" << k << ") = " << RecursiveFibonacci(k) << endl;
    // }

    // cout << endl ;

    // // Test Iterative Fibonacci Function
    // for (int k = 0; k < 100; k++)
    // {
    //     cout << "IterativeFibonacci(" << k << ") = " << IterativeFibonacci(k) << endl;
    // }

    cout << endl ;

    // Test Recursive Fibonacci Function v2
    for (int k = 0; k < 100; k++)
    {
        cout << "RecursiveFibonacci2(" << k << ") = " << RecursiveFibonacci2(k) << endl;
    }

}