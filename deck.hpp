/****************************************
*********** Program:deck.hpp
************ Author:Kingsley C. Chukwu
********** Date: 2/4/2019
********** Description:contains all the function needed to access and create a deck of cards. it also shuffles the card and returns the number of on the deck. it also removes cards from the deck
*********** Input: integers
********* Output: number of cards
**********************************************/


#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <climits>
#include <cstring>
#include <fstream>
#include <algorithm>
#include "card.hpp"


using namespace std;


class Deck {
  private:
    Card cards[52];
    int n_cards;  // Number of cards remaining in the deck.
  public:
  void initial();
  void print_deck();
  int get_n_cards() { return n_cards; }
  void shuffle();
  void minus_cards(int numb);
  Card return_card( int n_card);
};


#endif
