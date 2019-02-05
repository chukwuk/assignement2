/****************************************
************* Program:hand.cpp
************** Author:Kingsley C. Chukwu
************ Date: 2/4/2019
************ Description:contains all the function needed to the number of cards in a hand; it also modifies the cards in the hand. it takes and remove cards from a hand
************* Input: integers
*********** Output: number of cards, number of cards that have a particular rank, 
************************************************/


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
#include "implemen.hpp"

using namespace std;

/******************************************************
 ******************************** Function:Hand
 ****************************** Description:assign a pointer to store an array of 52 cards
 ******************************* Parameters: none
 ******************************** Pre-Conditions: none
 * ******************************* Post-Conditions: assigns a pointer to store an array of 52 cards
 **********************************************************************************/



Hand::Hand() :  n_cards(0) {
  std::cout << "== Default Hand constructor called." << std::endl;
  this->cards = new Card [52];
}


void Hand::add_cards(Card card_to_add) {
    Card *temp = new Card[this->n_cards+1];
    for (int i = 0; i < this->n_cards; i++) {
        temp[i] = cards[i];
    }
    temp[n_cards] = card_to_add; 
    delete [] this->cards; 
    this->cards = temp; this->n_cards++;

}

void Hand::print_card() {
     cout <<"You have "<<this->n_cards<<" cards in your hands, which are"<<endl; cout <<" "<<endl;
     for (int i = 0; i < this->n_cards; i++) {
        int r = this->cards[i].get_rank();
        int s = this->cards[i].get_suit();
        string  ra = card_rank(r);  string su =  card_suit(s); 
        cout <<"A card with a rank of "<<ra<<" and a "<<su <<" suit"<<endl;
        cout <<" "<<endl;
     }
}

void Hand::add_cards_array (Card *card_to_add, int num_card) {
    Card *temp = new Card[this->n_cards + num_card];
    for (int i = 0; i < this->n_cards; i++) {
        temp[i] = cards[i];
    }
    for (int j = 0; j<num_card; j++) {
        temp[n_cards + j] = card_to_add[j];
    }
    delete [] this->cards; 
    this->cards = temp; this->n_cards = this->n_cards + num_card;
    delete [] card_to_add; 

}

int Hand::check_for_rank( int card_rank) {
    for (int i = 0; i < this->n_cards; i++) {
        int r = this->cards[i].get_rank(); 
        if (r == card_rank ) { return INT_MAX; }
    }
    return INT_MIN;
}

int Hand::numb_of_rank_book() {
    for (int j = 0; j < 13; j++) {
    int num_rank = 0;
       for (int i = 0; i < this->n_cards; i++) {
           int r = this->cards[i].get_rank();
           if (r == j) { num_rank++; } 
        }
       
        if (num_rank==4) { return j; }
    }
    return INT_MAX;
}

int Hand::numb_of_rank(int card_rank) {
    int num_rank = 0;
    for (int i = 0; i < this->n_cards; i++) {
    int r = this->cards[i].get_rank();
    if (r == card_rank) { num_rank++; }
    }
    return num_rank;
}


Card* Hand::substract_cards_book(int card_rank) {
      Card *temp = new Card[this->n_cards-4]; Card *card_to_return = new Card[4]; int count=0; int c=0;
      for (int i = 0; i < this->n_cards; i++) {
      int r =  this->cards[i].get_rank();
      if (r != card_rank ) {
         temp[c] = this->cards[i];
         c++;
      }
      if (r == card_rank ) {
      card_to_return[count] = this->cards[i];
      count++;
      }
      }
      delete [] this->cards;
      this->n_cards = this->n_cards-4;
      this->cards = temp;
      return card_to_return;
}

Card* Hand::substract_cards(int card_rank, int num_card) {
    Card *temp = new Card[this->n_cards-num_card]; Card *card_to_return = new Card[num_card]; int count=0; int c = 0;
    for (int i = 0; i < this->n_cards; i++) {
        int r = this->cards[i].get_rank();
       /* cout << r << endl;
        cout << card_rank <<endl; */
        if (r != card_rank) {
        temp[c] = this->cards[i];
        c++;
        }
        if (r == card_rank ) {
        card_to_return[count] = this->cards[i];
        count++;
    }
    }
    delete [] this->cards; 
    this->n_cards=this->n_cards-num_card;
    this->cards = temp;
    return card_to_return;

} 

/*Card Hand::substract_cards(int card_rank, int num_card) {
    Card temp; Card card_to_return ; int count=0;
    for (int i = 0; i < this->n_cards; i++) {
        int r = this->cards[i].get_rank();
        cout << r << endl;
        cout << card_rank <<endl;
        if (r == card_rank) {
        temp = this->cards[i]; this->cards[i] = this->cards[n_cards-1];  this->cards[n_cards-1] = temp;
         break;
        }
        
    card_to_return = this->cards[n_cards-1];
    
    this->n_cards=this->n_cards-num_card;
    this->cards = temp;
    return card_to_return;
}
}*/



Hand::~Hand() {
  std::cout << "== Destructor called for student " <<  std::endl;
  delete[] this->cards;
}


