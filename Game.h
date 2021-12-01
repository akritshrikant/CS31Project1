//
//  Game.hpp
//  CS32_Project1
//
//  Created by Akrit Shrikant on 1/6/21.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>

class City;

class Game
{
  public:
        // Constructor/destructor
    Game(int rows, int cols, int nFlatulans);
    ~Game();

        // Mutators
    int decodeDirection(char dir);
    void play();

  private:
    City* m_city;
};


#endif /* Game_hpp */
