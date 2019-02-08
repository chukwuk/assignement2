/****************************************
********* Program:gofish.cpp
********** Author:Kingsley C. Chukwu
******** Date: 2/4/2019
******** Description:combines all the various cpp files containing classes to build the game.
********* Input: string
******* Output: The winner of the game
********************************************/

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
#include "deck.hpp"
#include "player.hpp"
#include "game.hpp"
#include "implemen.hpp"

using namespace std;

int main () {
    srand(time(0)); Card temp; int enter_rank; int num_choos; int got_rank = 0; Card tempo; int num_books_1; int num_books_2;
    
    Game play;
    play.initial();
    /* play.game_player_print_card(0);
    play.game_player_print_card(1); */
    while (13!=play.check_game_end()) {
    do {
    got_rank = 0; int r_ww = 0;
    do  {       
    if (0==play.game_player_numb_card(0)) {
       if (0!= play.game_get_n_cards()) {    
        int n_cards = play.game_get_n_cards();
      /*  cout << n_cards << endl; */
        int rand_card = rand() % n_cards;
        temp = play.game_return_card (rand_card);
        play.game_minus_cards(rand_card);
        play.game_player_add_cards(temp,  0);
      }
     }
     if (r_ww > 0) {
        cout <<" "<<endl;
        cout <<"You dont have the rank you requested from the other player"<<endl; cout<<" "<<endl;
     }
     r_ww++; 
    play.game_player_print_card(0);
    if (13 == play.check_game_end()) { break; }
    enter_rank = check_err(); /*function to check input error*/
    } while (INT_MIN == play.game_player_check_for_rank(enter_rank, 0));
    if (INT_MIN == play.game_player_check_for_rank(enter_rank, 1)) {
          if (0!= play.game_get_n_cards()) {
             int n_cards = play.game_get_n_cards();
             cout << n_cards << endl;
             int rand_card = rand() % n_cards; 
             tempo = play.game_return_card (rand_card); 
             if (enter_rank == tempo.get_rank()) { got_rank = 1;   } 
             play.game_minus_cards(rand_card);  
             play.game_player_add_cards(tempo,  0);      
    } 
    } else if (INT_MAX == play.game_player_check_for_rank(enter_rank, 1)) {
        got_rank = 1;
        num_choos =  play.game_player_numb_of_rank(enter_rank, 1); 
        Card* subs = play.game_player_substract_cards(enter_rank, num_choos, 1);
        play.game_player_add_cards_array(subs,num_choos, 0) ; 
    }
    if (INT_MAX!=play.game_player_numb_of_rank_book(0)) { 
       int num_ran = play.game_player_numb_of_rank_book(0);
       Card* tempor = play.game_player_substract_cards_books(num_ran, 0); 
       play.game_add_cards_array_books(tempor, 4, 0);
       play.game_add_book(0);                                            
    }     
    num_books_1 = play.game_return_nbooks(0);    num_books_2 = play.game_return_nbooks(1);
    cout << "The computer has "<<num_books_2<<" books and you have "<<num_books_1<<" books"<<endl; cout <<" "<<endl;
    if (13 == play.check_game_end()) { break; }     
    } while (got_rank == 1);      
    cout<<" "<<endl; cout <<"This computer is about play now"<<endl; cout<<" "<<endl;
    /*where the computer starts to play using random number*/
    Card c_temp; int c_enter_rank; int c_num_choos; int c_got_rank = 0; Card c_tempo; int c_num_books_1; int c_num_books_2;
    do {
    c_got_rank = 0;
    do  {
    if (0==play.game_player_numb_card(1)) {
       if (0!= play.game_get_n_cards()) {
        int n_cards = play.game_get_n_cards();
        cout << n_cards << endl;
        int rand_card = rand() % n_cards;
        c_temp = play.game_return_card (rand_card);
        play.game_minus_cards(rand_card);
        play.game_player_add_cards(c_temp,  1);
      }
     }
   /*  cin >> c_enter_rank; */
    if (13 == play.check_game_end()) { break; }
    c_enter_rank = rand() % 13;
    } while (INT_MIN == play.game_player_check_for_rank(c_enter_rank, 1));
     play.game_player_print_card(0);
    if (INT_MIN == play.game_player_check_for_rank(c_enter_rank, 0)) {
          if (0!= play.game_get_n_cards()) {
             int n_cards = play.game_get_n_cards();
        /*     cout << n_cards << endl; */
             int rand_card = rand() % n_cards;
             c_tempo = play.game_return_card (rand_card);
             if (c_enter_rank == c_tempo.get_rank()) { c_got_rank = 1;   }
             play.game_minus_cards(rand_card);
             play.game_player_add_cards(c_tempo,  1);
    }
    } else if (INT_MAX == play.game_player_check_for_rank(c_enter_rank, 0)) {
        c_got_rank = 1;
        c_num_choos =  play.game_player_numb_of_rank(c_enter_rank, 0);
        Card* subs = play.game_player_substract_cards(c_enter_rank, c_num_choos, 0);
        play.game_player_add_cards_array(subs,c_num_choos, 1) ;
    }
    if (INT_MAX!=play.game_player_numb_of_rank_book(1)) {
       int num_ran = play.game_player_numb_of_rank_book(1);
       Card* tempor = play.game_player_substract_cards_books(num_ran, 1);
       play.game_add_cards_array_books(tempor, 4, 1);
       play.game_add_book(1);
    }
    c_num_books_1 = play.game_return_nbooks(0);    c_num_books_2 = play.game_return_nbooks(1);
    cout << "The computer has "<<c_num_books_2<<" books and you have "<<c_num_books_1<<" books"<<endl; cout <<" "<<endl;
    if (13 == play.check_game_end()) { break; }
    } while (c_got_rank == 1);
    }
    /*where the game ends*/
    int winner = play.check_game_winner();       /*The winner is decided here*/
    if (winner == 0) {
       int nn_books = play.game_return_nbooks(0);
       cout <<"You win the game with "<<nn_books<<" books"<<endl;
    }  else if (winner==1) {
       int nn_books = play.game_return_nbooks(1);
       cout <<"The computer wins the game with "<<nn_books<<" books"<<endl;
    }

    return 0; 

/*    int n_cards = play.game_get_n_cards();
    cout << n_cards << endl;
    play.game_player_print_card(0);
    play.game_player_print_card(1); */

}
