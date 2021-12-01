//
//  utilities.hpp
//  CS32_Project1
//
//  Created by Akrit Shrikant on 1/6/21.
//

#ifndef utilities_hpp
#define utilities_hpp

#include <stdio.h>

const int MAXROWS = 20;               // max number of rows in a city
const int MAXCOLS = 30;               // max number of columns in a city
const int MAXFLATULANS = 120;         // max number of Flatulans allowed
const int INITIAL_PLAYER_HEALTH = 12;

const int UP      = 0;
const int DOWN    = 1;
const int LEFT    = 2;
const int RIGHT   = 3;
const int NUMDIRS = 4;


void clearScreen();
int randInt(int min, int max);

#endif /* utilities_hpp */

