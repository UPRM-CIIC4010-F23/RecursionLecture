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

    // base case
    if ( row < 0 || row > 5 || col < 0 || col > 5 ){
       return false ; 
    }

    if (maze[row][col] == 3){
        // encontramos queso
        return true ;
    }

    if (maze[row][col] == 0){
        // pared
        return false; 
    }

    if (maze[row][col] == 1){
        // camino ya visitado
        return false ; 
    }

    // camino sin visitar
    maze[row][col] = 1;

    // derecha: col++
    if (findCheese(row, col+1))  return true ; 

     // abajo: row++
    if (findCheese(row+1, col)) return true;

    // izquierda: col --
    if(findCheese(row, col-1)) return true;

    // arriba: row--
    if(findCheese(row-1, col)) return true;


    return false; //Dummy Return
}

string findPositionCheese(int row, int col)
{
    // base case
    if ( row < 0 || row > 5 || col < 0 || col > 5 ){
       return "" ; 
    }

    if (maze[row][col] == 3){
        // encontramos queso
        return "["+to_string(row) +","+to_string(col)+"]" ;
    }

    if (maze[row][col] == 0){
        // pared
        return ""; 
    }

    if (maze[row][col] == 1){
        // camino ya visitado
        return "" ; 
    }

    // camino sin visitar
    maze[row][col] = 1;

    string result = "" ;
    
    // derecha: col++
    result = findPositionCheese(row, col+1) ;
    if (result != "")  return "["+to_string(row) +","+to_string(col)+"]" + result; 

     // abajo: row++
     result = findPositionCheese(row+1, col) ;
    if (result != "") return "["+to_string(row) +","+to_string(col)+"]" + result;

    // izquierda: col --
    result = findPositionCheese(row, col-1) ; 
    if(result != "") return "["+to_string(row) +","+to_string(col)+"]" + result;

    // arriba: row--
    result = findPositionCheese(row-1, col) ;
    if(result != "") return "["+to_string(row) +","+to_string(col)+"]" + result;


    return ""; //Dummy Return
}

int main()
{
    cout << boolalpha;

    // cout << findCheese(0, 0) << endl;
    cout << findPositionCheese(0, 0) << endl;

}