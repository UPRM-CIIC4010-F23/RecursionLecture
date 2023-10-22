#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
 * A permutation also called an 'arrangement number' is a rearrangement 
 * of the elements of an string S into a one-to-one correspondence with 
 * S itself.
 * Input: S = "ABC"
 * Output: "ABC", "ACB", "BAC", "BCA", "CBA", "CAB"
*/


vector<string> RecursivePermutation(string w)
{
    vector<string> result;
    // YOUR CODE HERE
    return result; //Dummy Return
}


int main()
{
    vector<string> permutation1 = RecursivePermutation("abc");
    for (int i = 0; i < permutation1.size(); i++)
    {
        cout << permutation1[i] << endl;
    }

    vector<string> permutation2 = RecursivePermutation("abcd");
    for (int i = 0; i < permutation2.size(); i++)
    {
        cout << permutation2[i] << endl;
    }

}