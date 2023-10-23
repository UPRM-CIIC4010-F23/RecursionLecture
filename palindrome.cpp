#include <iostream>
#include <string>

using namespace std;

/*
 * Palindrome
 * 
 * A palindrome is a word, sentence, verse, or even number that reads 
 * the same backward or forward. It derives from Greek roots that 
 * literally mean “running back” (palin is “again, back,” and dromos, “running.”)
 * 
 * e.g. noon, civic, racecar, tattarrattat
*/


// Check Palindrome Iteratively
bool IterativeIsPalindrome( string w )
{
    // YOUR CODE HERE
    return false; //Dummy Return
}

// Check Palindrome Recursively
bool RecursiveIsPalindrome( string w )
{
    // base case
    if (w.size() <= 1) return true;

    if ( w[0] == w[w.size() -1 ] ) {
        w = w.substr(1,w.size() -2) ;
        return RecursiveIsPalindrome( w ) ;
    }

    return false; //Dummy Return
}


int main()
{
    cout << boolalpha;

    string s1 = "";
    string s2 = "race";
    string s3 = "car";
    string s4 = "racecar";
    string s5 = "noon";
    string s6 = "CIIC";
    string s7 = "ICOM";
    string s8 = "tattarrattat";

    // // Test Check Palindrome Iteratively
    
    // cout <<  IterativeIsPalindrome(s1) << endl;
    // cout <<  IterativeIsPalindrome(s2) << endl;
    // cout <<  IterativeIsPalindrome(s3) << endl;
    // cout <<  IterativeIsPalindrome(s4) << endl;
    // cout <<  IterativeIsPalindrome(s5) << endl;
    // cout <<  IterativeIsPalindrome(s6) << endl;
    // cout <<  IterativeIsPalindrome(s7) << endl;
    // cout <<  IterativeIsPalindrome(s8) << endl;
    

    cout << endl ;

    // Test Check Palindrome Recursively
    cout <<  RecursiveIsPalindrome(s1) << endl;
    cout <<  RecursiveIsPalindrome(s2) << endl;
    cout <<  RecursiveIsPalindrome(s3) << endl;
    cout <<  RecursiveIsPalindrome(s4) << endl;
    cout <<  RecursiveIsPalindrome(s5) << endl;
    cout <<  RecursiveIsPalindrome(s6) << endl;
    cout <<  RecursiveIsPalindrome(s7) << endl;
    cout <<  RecursiveIsPalindrome(s8) << endl;

}