#include <iostream>
#include <string>

using namespace std;

int maze[6][6] =
{
    {2, 2, 2, 0, 0, 0},
    {0, 0, 2, 0, 0, 0},
    {0, 0, 2, 2, 2, 0},
    {0, 0, 2, 0, 3, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0}
};

bool findCheese(int row, int col)
{
    // YOUR CODE HERE

    if ( row == 0 ){
        // abajo: row++
    }

    if ( col == 0){
        // derecha : col++
    }

    if ( row == 5 ){
        // abajo: row--
    }

    if ( col == 5){
        // derecha : col--
    }
 
    if ( row != 0 && row!= 5 && col != 0 && col!= 5 ){
        // move all directions
    }


    if (maze[row][col] == 0){
        // pared
    }

    if (maze[row][col] == 2){
        // camino sin visitar
        maze[row][col] = 1;
    }

    if (maze[row][col] == 1){
        // camino ya visitado
    }

    if (maze[row][col] == 3){
        // encontramos queso
        return true
    }


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