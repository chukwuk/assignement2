/****************************************
************ Program:deck.cpp
************* Author:Kingsley C. Chukwu
*********** Date: 2/4/2019
*********** Description:contains all the function needed to access and create a deck of cards. it also shuffles the card and returns the number of on the deck. it also removes cards from the deck
************ Input: integers
********** Output: number of cards
***********************************************/


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <climits>
#include <cstring>
#include <fstream>
#include <algorithm>
#include "deck.hpp"

using namespace std;

/******************************************************
 ****************************** Function:initial
 ***************************** Description:initial an array of 52 cards
 ***************************** Parameters: none 
 ****************************** Pre-Conditions: none
 ****************************** Post-Conditions: initializes an 52 array of cards
 ********************************************************************************/

void Deck::initial () {
    this->n_cards = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
             cards[n_cards].set_values(i,j);
             this->n_cards++;
        }
    }
}

/******************************************************
 ****************************** Function:shuffle
 ***************************** Description:shuffles the card using a random
 ***************************** Parameters: none
 ****************************** Pre-Conditions: none
 ****************************** Post-Conditions: none
 ********************************************************************************/

void Deck::shuffle() {
    srand(time(0));
    for (int i = 0; i<n_cards; i++) {
        int s = rand() % n_cards;
        Card temp = this->cards[i]; this->cards[i] = this->cards[s]; this->cards[s] = temp;
    }
}

/******************************************************
 ****************************** Function:card_rank
 ***************************** Description:return a rank string corresponding to a number
 ***************************** Parameters: integer
 ****************************** Pre-Conditions: integer
 ****************************** Post-Conditions: return a string that corresponds to a rank
 ********************************************************************************/

void Deck::minus_cards(int numb) {
     for (int i = 0; i<n_cards; i++) {
         if (numb==i) {
             Card temp=this->cards[this->n_cards-1]; this->cards[this->n_cards-1] = cards[i]; this->cards[i] = temp;
         }
     }
         this->n_cards--;

}

/******************************************************
 ****************************** Function:return_card
 ***************************** Description:return a card corresponding to an array
 ***************************** Parameters: integer
 ****************************** Pre-Conditions: integer
 ****************************** Post-Conditions: return a card corresponding to an array
 ********************************************************************************/

Card Deck::return_card(int n_card) {
         return this->cards[n_card];
}

/******************************************************
 ***************************** Function:print_deck
 **************************** Description:print the rank and suit of a card
 ***************************** Parameters: none
 ***************************** Pre-Conditions: none
 ****************************** Post-Conditions: outputs the rank
 ********************************************************************************/


void Deck::print_deck() {
  int lol =  cards[51].get_suit();
  int sol = cards[51].get_rank();
  cout <<"The suit of the first card is "<<lol<<endl;
  cout <<"The rank of the first card is "<<sol<<endl;
  cout<<"The number of card is "<<this->n_cards<<endl;
}

