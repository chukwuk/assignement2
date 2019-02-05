/****************************************
************** Program:hand.hpp
*************** Author:Kingsley C. Chukwu
************* Date: 2/4/2019
************* Description:contains all the function needed to the number of cards in a hand; it also modifies the cards in the hand. it takes and remove cards from a hand
************** Input: integers
************ Output: number of cards, number of cards that have a particular rank,
*************************************************/



#ifndef HAND_H
#define HAND_H 


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

/******************************************************
 ****************** Structure:Declaration of the Hand
 ******************* Function:stores the properties of the Hand and keeps track of cards on the hand and number of cards on the hand
 *********************************************************************/


class Hand {
  private:
    Card* cards;
    int n_cards;  
  public:
  Hand();
  void add_cards(Card card_to_add);
  void print_card();
  int numb_card() { return n_cards; }
  Card* substract_cards(int card_rank, int num_card);
  ~Hand(); 
  void add_cards_array(Card *card_to_add, int num_card);
  int check_for_rank( int card_rank); 
  int numb_of_rank(int card_rank); 
  Card* substract_cards_book(int card_rank);
  int numb_of_rank_book(); 
};

#endif
