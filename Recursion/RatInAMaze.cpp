// A rat has to go from (0, 0) to (n, n) where some cells (x, y) x<n, y<n are blocked.
// The 0's in the matrix denote blocked cell and the 1's denote that the rat can come to this cell
#include <iostream>
#include <algorithm>
using namespace std;
bool isSafe(int** arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}
bool ratInAMaze(int** arr, int x, int y, int n, int** solArr)
{
    if (x == (n - 1) && y == (n - 1))
    {
        solArr[x][y] = 1;
        return true;
    }
    if (isSafe(arr, x, y, n))
    {
        solArr[x][y] = 1;
        if (ratInAMaze(arr, x + 1, y, n, solArr))
        {
            return true;
        }
        if (ratInAMaze(arr, x, y + 1, n, solArr))
        {
            return true;
        }
        solArr[x][y] = 0; // backtracking
        return false;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int** arr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int** solArr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }
    }

    if (ratInAMaze(arr, 0, 0, n, solArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
/*
INPUT:
1 0 1 0 1
1 1 1 1 1
0 1 0 1 0
1 0 0 1 1
1 1 1 0 1

OUTPUT:
1 0 0 0 0 
1 1 1 1 0 
0 0 0 1 0 
0 0 0 1 1 
0 0 0 0 1
*/