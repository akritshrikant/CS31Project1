//
//  History.hpp
//  CS32_Project1
//
//  Created by Akrit Shrikant on 1/6/21.
//

#ifndef History_hpp
#define History_hpp

#include <stdio.h>
#include "globals.h"

class History
    {
      public:
        History(int nRows, int nCols);
        bool record(int r, int c);
        void display() const;
      private:
        int a_cityRows;
        int a_cityCols;
        int gridChecker[MAXROWS][MAXCOLS];
    };

#endif /* History_hpp */
