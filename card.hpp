/****************************************
*********** Program:card.hpp
************ Author:Kingsley C. Chukwu
********** Date: 2/4/2019
********** Description:contains all the function needed to access the properties of a card.
*********** Input: integers
********* Output: rank and suits of the card
**********************************************/


#ifndef  CARD_H
#define CARD_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <climits>
#include <cstring>
#include <fstream>
#include <algorithm>



using namespace std;

class Card {
    int rank;
    int suit;
  public:
     void set_values (int,int);
     void print_student();
     int get_rank() { return rank;}
     int get_suit() { return suit;}
     void operator=(const Card& rhs);
     
};



#endif
