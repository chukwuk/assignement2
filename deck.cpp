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


void Deck::initial () {
    this->n_cards = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
             cards[n_cards].set_values(i,j);
             this->n_cards++;
        }
    }
}

void Deck::shuffle() {
    srand(time(0));
    for (int i = 0; i<n_cards; i++) {
        int s = rand() % n_cards;
        Card temp = this->cards[i]; this->cards[i] = this->cards[s]; this->cards[s] = temp;
    }
}


void Deck::minus_cards(int numb) {
     for (int i = 0; i<n_cards; i++) {
         if (numb==i) {
             Card temp=this->cards[this->n_cards-1]; this->cards[this->n_cards-1] = cards[i]; this->cards[i] = temp;
         }
     }
         this->n_cards--;

}

Card Deck::return_card(int n_card) {
         return this->cards[n_card];
}



void Deck::print_deck() {
  int lol =  cards[51].get_suit();
  int sol = cards[51].get_rank();
  cout <<"The suit of the first card is "<<lol<<endl;
  cout <<"The rank of the first card is "<<sol<<endl;
  cout<<"The number of card is "<<this->n_cards<<endl;
}

