//
//  Flatulan.hpp
//  CS32_Project1
//
//  Created by Akrit Shrikant on 1/6/21.
//

#ifndef Flatulan_hpp
#define Flatulan_hpp

#include <stdio.h>

class City;

class Flatulan
{
  public:
        // Constructor
    Flatulan(City* cp, int r, int c);

        // Accessors
    int  row() const;
    int  col() const;

        // Mutators
    void move();
    bool possiblyGetConverted();

  private:
    City* m_city;
    int   m_row;
    int   m_col;
};

#endif /* Flatulan_hpp */
