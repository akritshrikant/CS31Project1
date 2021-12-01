//
//  History.cpp
//  CS32_Project1
//
//  Created by Akrit Shrikant on 1/6/21.
//

#include "History.h"
#include "globals.h"

#include <iostream>

using namespace std;

History::History(int nRows, int nCols)
{
    a_cityRows = nRows;
    a_cityCols = nCols;
    //filling grid w 0s for record!
    for (int i = 0; i < nRows; i++)
        for (int j = 0; j < nCols; j++)
            gridChecker[i][j] = 0;
}

bool History::record(int r, int c)
{
    if (r > a_cityRows || r < 1 || c > a_cityCols || c < 1)
        return false;
    gridChecker[r - 1][c - 1]++;
    return true;
}

void History::display() const
{
    clearScreen();
    char histGrid[MAXROWS][MAXCOLS];
    for (int i = 0; i < a_cityRows; i++)
    {
        for (int j = 0; j < a_cityCols; j++)
        {
            histGrid[i][j] = '.';
        }
    }
    
    for (int i = 0; i < a_cityRows; i++)
    {
        for (int j = 0; j < a_cityCols; j++)
        {
            if (gridChecker[i][j] > 0)
            {
                histGrid[i][j] = 'A';
                histGrid[i][j]--;
            }
            histGrid[i][j] += gridChecker[i][j];
            
            
            cout << histGrid[i][j];
        }
        cout << endl;
    }
    
    cout << endl;
}
