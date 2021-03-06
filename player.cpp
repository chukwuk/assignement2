/****************************************
************ Program:player.cpp
************* Author:Kingsley C. Chukwu
*********** Date: 2/4/2019
*********** Description:contains all the function needed to the number of cards in the player's hand; the number of books the player has,it also modifies the cards in the player's hand by using function from the hand.hpp file
************ Input: integers
********** Output: number of books, number of cards 
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
#include "player.hpp"


using namespace std;


/*****************************************************
 ******************************** Function:Player
 ****************************** Description:assign a pointer to store an array of 52 cards
 ******************************* Parameters: none
 ******************************** Pre-Conditions: none
 ******************************** Post-Conditions: assigns a pointer to store an array of 52 cards
 ***********************************************************************************/





Player::Player() : n_cards_b(0), n_books(0)  {
     this->books = new Card[52];
}

/*****************************************************
 ********************************* Function:add_book
 ******************************* Description:add one to the number of book for a book
 ******************************** Parameters: none
 ********************************* Pre-Conditions: none
 ********************************* Post-Conditions: increase the number of book by one
 * ***********************************************************************************/

void Player::add_book() {
     this->n_books++;
}

void Player::player_add_cards_array (Card* card_to_add, int num_card) { 
    this->hand.add_cards_array(card_to_add, num_card);
}

Card* Player::player_substract_cards_books(int card_rank) { 
     Card* temp = this->hand.substract_cards_book(card_rank); 
     return temp;
}

int Player::player_check_for_rank( int card_rank) {
    int temp = this->hand.check_for_rank(card_rank);
    return temp;
}

int Player::player_numb_of_rank(int card_rank) {
    int temp = this->hand.numb_of_rank(card_rank);
    return temp;
}


Card* Player::player_substract_cards(int card_rank, int num_card) { 
      Card* tempe = this->hand.substract_cards(card_rank, num_card);
      return tempe;
}

void Player::add_cards_array_books(Card *card_to_add, int num_card) {
    Card *temp = new Card[this->n_cards_b + num_card];
    for (int i = 0; i < this->n_cards_b; i++) {
        temp[i] = books[i];
    }
    for (int j = 0; j<num_card; j++) {
        temp[n_cards_b + j] = card_to_add[j];
    }
    delete [] this->books;
    this->books = temp; this->n_cards_b = this->n_cards_b + num_card;
    delete [] card_to_add;

}


int Player::player_numb_of_rank_book() {
    int r = this->hand.numb_of_rank_book();
    return r;
}

Player::~Player() {
     delete [] this->books;
}

 
