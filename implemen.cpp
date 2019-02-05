/****************************************
*************** Program:implemen.cpp
**************** Author:Kingsley C. Chukwu
************** Date: 2/4/2019
************** Description:contains all the function need to check error, output the rank and suit that corresponds to a particular integer
*************** Input: integers
************* Output: outputs strings
**************************************************/




#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <climits>
#include <cstring>
#include <fstream>
#include <algorithm>
#include "implemen.hpp"
#include "game.hpp"


using namespace std;

/******************************************************
 ***************************** Function:card_rank
 **************************** Description:return a rank string corresponding to a number
 **************************** Parameters: integer
 ***************************** Pre-Conditions: integer
 ***************************** Post-Conditions: return a string that corresponds to a rank
 *******************************************************************************/


string card_rank(int num)  {
    if (num == 0) { return "Ace"; } 
    if (num == 1) {return "2"; } 
    if (num == 2) { return "3"; }
    if (num == 3) { return "4"; }
    if (num == 4) { return "5"; }
    if (num == 5) { return "6"; }
    if (num == 6) { return "7"; }
    if (num == 7) { return "8"; }
    if (num == 8) { return "9"; }
    if (num == 9) { return "10"; }
    if (num == 10) { return "Jack"; }
    if (num == 11) { return "Queen"; }
    if (num == 12) { return "King"; }
}

/******************************************************
 **************************** Function:card_suit
 **************************** Description:return a suit string corresponding to a number
 *************************** Parameters: integer
 **************************** Pre-Conditions: integer
 **************************** Post-Conditions: return a string
  ******************************************************************************/


string card_suit(int num) {
      if (num == 0) { return "clubs"; }
      if (num == 1) { return "Diamonds"; }
      if (num == 2) { return "Hearts"; }
      if (num == 3) { return "Spades"; }
  
}

/*int check_err() {
   int r_w = 0; string uzo; int num_input;
 do {
       if (r_w > 0) {
          cout << " " << endl;
          cout << "Oops!, Invalid Input, Please enter a valid input"<<endl;
       }
       r_w++;
       cout << " " <<endl;
       data_to_explore();
       getline (cin, uzo);
       cout << " "<<endl;
       data_to_explore();
    }  while  ((uzo != "0") && (uzo != "1") && (uzo != "2") && (uzo != "3") && (uzo != "4") && (uzo != "5") && (uzo != "6") && (uzo != "7") && (uzo != "8") && (uzo != "9") && (uzo != "10") && (uzo != "11") && (uzo != "12"));
    num_input = atoi(uzo.c_str());
    return num_input;
} */

/******************************************************
 *************************** Function:data_to_explore
 *************************** Description:prints out the number needed to access a rank
 *************************** Parameters: none
 *************************** Pre-Conditions: none
 *************************** Post-Conditions: none
 ******************************************************************************/


void data_to_explore() {
   cout <<" "<<endl; cout<<"Enter between 0-12 to choose a rank"<<endl; cout <<" "<<endl;
   cout <<"Enter (0) for rank of Ace"<<endl; cout <<" "<<endl;
   cout <<"Enter (1) for rank of 2"<<endl; cout <<" "<<endl;
   cout <<"Enter (2) for rank of 3"<<endl; cout <<" "<<endl;
   cout <<"Enter (3) for rank of 4"<<endl; cout <<" "<<endl;
   cout <<"Enter (4) for rank of 5"<<endl; cout <<" "<<endl;
   cout <<"Enter (5) for rank of 6"<<endl; cout <<" "<<endl;
   cout <<"Enter (6) for rank of 7"<<endl; cout <<" "<<endl;
   cout <<"Enter (7) for rank of 8"<<endl; cout <<" "<<endl;
   cout <<"Enter (8) for rank of 9"<<endl; cout <<" "<<endl;
   cout <<"Enter (9) for rank of 10"<<endl; cout <<" "<<endl;
   cout <<"Enter (10) for rank of Jack"<<endl; cout <<" "<<endl;
   cout <<"Enter (11) for rank of Queen"<<endl; cout <<" "<<endl;
   cout <<"Enter (12) for rank of King"<<endl; cout <<" "<<endl;
}

/******************************************************
 ************************** Function:check_err
 ************************** Description:checks for input errors
 ************************** Parameters: none
 *************************** Pre-Conditions: none
 ************************** Post-Conditions: returns the input
 *****************************************************************************/


int check_err() {
   int r_w = 0; string uzo; int num_input;
   do {
       if (r_w > 0) {
          cout << " " << endl;
          cout << "Oops!, Invalid Input, Please enter a valid input"<<endl;
       }
       r_w++;
       cout << " " <<endl;
       data_to_explore();
       getline (cin, uzo);
    }  while  ((uzo != "0") && (uzo != "1") && (uzo != "2") && (uzo != "3") && (uzo != "4") && (uzo != "5") && (uzo != "6") && (uzo != "7") && (uzo != "8") && (uzo != "9") && (uzo != "10") && (uzo != "11") && (uzo != "12"));
    num_input = atoi(uzo.c_str());
    return num_input;
}





