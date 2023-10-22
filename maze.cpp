#include <iostream>
#include <string>

using namespace std;

int maze[6][6] =
{
    {2, 2, 2, 0, 0, 0},
    {0, 0, 2, 0, 0, 0},
    {0, 0, 2, 2, 2, 0},
    {0, 0, 2, 0, 0, 0},
    {0, 0, 0, 0, 0, 3}
};

bool findCheese(int row, int col)
{
    // YOUR CODE HERE
    return false; //Dummy Return
}

string findPositionCheese(int row, int col)
{
    // YOUR CODE HERE
    return ""; //Dummy Return
}

int main()
{
    cout << boolalpha;

    cout << findCheese(0, 0) << endl;
    cout << findPositionCheese(0, 0) << endl;

}