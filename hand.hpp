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
