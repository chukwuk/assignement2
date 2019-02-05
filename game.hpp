#ifndef GAME_H
#define GAME_H


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
#include "deck.hpp"




using namespace std;

class Game {
  private:
    Deck deck_card;
    Player player[2];
  public:
  void initial();
  void game_player_print_card(int i);
  int  game_player_numb_card(int i);
  void game_player_add_cards(Card give_card, int i);
  void game_add_book(int i);
  int game_return_nbooks (int i);
  Card* game_player_substract_cards(int card_rank, int num_card,int i);
  void game_player_add_cards_array(Card* card_to_add, int num_card, int i);
  int game_player_numb_of_rank_book(int i);
  void game_add_cards_array_books(Card *card_to_add, int num_card, int i);
  Card* game_player_substract_cards_books(int card_rank, int i);
  int game_player_check_for_rank( int card_rank, int i);
  int game_player_numb_of_rank(int card_rank, int i);
  int check_game_end();
  int check_game_winner();
  int game_get_n_cards();
  void game_minus_cards(int numb);  
  Card game_return_card (int n_card); 
  void game_shuffle();
};

#endif
