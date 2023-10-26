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

    // base code
    if (w.size() == 1){
        result.push_back(w);
        return result;
    }

    for (int i = 0; i <w.size(); i++){
        string currentLetter = w.substr(i,1) ; 
        string restOfString = w.substr(0,i) + w.substr(i+1, w.size()-1-i);

        vector<string> permutation = RecursivePermutation(restOfString);

        for (int j = 0; j <  permutation.size(); j++){
            result.push_back(currentLetter + permutation[j]);
        }
    }


    return result; //Dummy Return
}


int main()
{
    vector<string> permutation1 = RecursivePermutation("abc");
    for (int i = 0; i < permutation1.size(); i++)
    {
        cout << "permutation1[" << i << "] = " << permutation1[i] << endl;
    }

    cout << endl; 

    vector<string> permutation2 = RecursivePermutation("abcd");
    for (int i = 0; i < permutation2.size(); i++)
    {
        cout << "permutation2[" << i << "] = " << permutation2[i] << endl;
    }

}