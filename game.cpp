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
#include "game.hpp"





void  Game::initial()   {
      srand(time(0));
      this->deck_card.initial();
      this->deck_card.shuffle();
      for (int i = 0; i<7; i++) {
          int n_cards = this->deck_card.get_n_cards();
          /*cout << n_cards << endl;  */
          int rand_card = rand() % n_cards;
          Card give_card = this->deck_card.return_card(rand_card);
          this->deck_card.minus_cards(rand_card);
          this->player[0].player_add_cards(give_card);
      }
      for (int i = 0; i<7; i++) {
          int n_cards = this->deck_card.get_n_cards();
          /*cout << n_cards << endl; */
          int rand_card = rand() % n_cards;
          Card give_card = this->deck_card.return_card(rand_card);
          this->deck_card.minus_cards(rand_card);
          this->player[1].player_add_cards(give_card);
      }
}
void Game::game_shuffle() {
    this->deck_card.shuffle();
}

int Game::game_get_n_cards() {
    int r = this->deck_card.get_n_cards();
    return r;
}

void Game::game_minus_cards(int numb) {
     this->deck_card.minus_cards(numb);
}

Card Game::game_return_card (int n_card)  {
    Card temp = this->deck_card.return_card(n_card);
    return temp;
}




void Game::game_player_print_card(int i) {this->player[i].player_print_card();}

int Game::game_player_numb_card(int i) {
   int temp = player[i].player_numb_card(); 
   return temp;
}

Card* Game::game_player_substract_cards(int card_rank, int num_card, int i) {
      Card* temp = this->player[i].player_substract_cards(card_rank, num_card);
      return temp;
}

int Game::game_player_numb_of_rank_book(int i) {
    int temp = this->player[i].player_numb_of_rank_book();
    return temp;
}

void Game::game_add_cards_array_books(Card *card_to_add, int num_card, int i) {
              this->player[i].add_cards_array_books(card_to_add, num_card);
}
Card* Game::game_player_substract_cards_books(int card_rank, int i) {
      Card* temp = this->player[i].player_substract_cards_books(card_rank);
      return temp;
}
int Game::game_player_check_for_rank(int card_rank, int i) {
    int temp = this->player[i].player_check_for_rank(card_rank);
    return temp;
}
int Game::game_player_numb_of_rank(int card_rank, int i) {
     int temp = this->player[i].player_numb_of_rank(card_rank);
     return temp;
}
int Game::check_game_end() {
    int first = this->player[0].return_nbooks();
    int second = this->player[1].return_nbooks();
    return (first + second);    
}

int Game::check_game_winner() {
    int first = this->player[0].return_nbooks();
    int second = this->player[1].return_nbooks();
    if (first > second) { return 0; }
    if (second > first) { return 1; }
}


void Game::game_player_add_cards_array(Card* card_to_add, int num_card, int i) {
     this->player[i].player_add_cards_array(card_to_add, num_card) ;
}

void Game::game_player_add_cards(Card give_card, int i) {
      this->player[i].player_add_cards(give_card);
}

void Game::game_add_book(int i) { this->player[i].add_book(); }


int Game::game_return_nbooks (int i) { 
     int temp = this->player[i].return_nbooks();
     return temp; 
}
