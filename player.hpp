/****************************************
************* Program:player.hpp
************** Author:Kingsley C. Chukwu
************ Date: 2/4/2019
************ Description:contains all the function needed to the number of cards in the player's hand; the number of books the player has,it also modifies the cards in the player's hand by using function from the hand.hpp file
************* Input: integers
*********** Output: number of books, number of cards
************************************************/


#ifndef PLAYER_H
#define PLAYER_H


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <climits>
#include <cstring>
#include <fstream>
#include <algorithm>
#include "hand.hpp"
#include "card.hpp"

using namespace std;


/******************************************************
 ******************** Structure:Declaration of the Player
 ******************** Function:stores the properties of the player and keeps track of the number of book for a player
 **********************************************************************/


class Player {
  private:
    Hand hand;
    Card* books; 
    int n_cards_b; 
    int n_books;
  public:
  Player();
  int  player_numb_card() {  int t = this->hand.numb_card(); return t; } 
  void player_add_cards(Card give_card) { this->hand.add_cards(give_card); }
  void player_print_card()  { this->hand.print_card(); } 
  void add_book();
  Card* player_substract_cards(int card_rank, int num_card);
  void player_add_cards_array(Card* card_to_add, int num_card);
  ~Player();
   int player_numb_of_rank_book();
  void add_cards_array_books(Card *card_to_add, int num_card);
   Card* player_substract_cards_books(int card_rank);
  int player_check_for_rank( int card_rank);
  int player_numb_of_rank(int card_rank);
  int return_nbooks () {return n_books; } 
 };

#endif
