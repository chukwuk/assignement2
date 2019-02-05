/****************************************
********** Program:card.cpp
*********** Author:Kingsley C. Chukwu
********* Date: 2/4/2019
********* Description:contains all the function needed to access the properties of a card.
********** Input: integers
******** Output: rank and suits of the card
*********************************************/



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


/*Card::Card (int rank, int suit) : rank(rank), suit(suit) {}*/
/******************************************************
 ************************** Function:set_vales
 ************************** Description:it is used to initial the rank and suit of a card
 ************************** Parameters:integers
 *************************** Pre-Conditions:integers
 ************************** Post-Conditions: initial the values
 *****************************************************************************/


void Card::set_values (int x, int y) {
    this->rank = y;
    this->suit = x;
}

/******************************************************
 *************************** Function:print_student
 ************************** Description:print the rank and suit
 *************************** Parameters:none
 **************************** Pre-Conditions:none
 ************************** Post-Conditions: print the rank and suit of a card
 ******************************************************************************/

void Card::print_student() {
    cout <<"The rank is "<<this->rank<<endl;
    cout<<"The suit is "<<this->suit<<endl;
}

/******************************************************
 **************************** Function:operator
 ************************** Description:copy the card
 **************************** Parameters:none
 ***************************** Pre-Conditions:none
 *************************** Post-Conditions: copys the card
 *******************************************************************************/


void Card::operator=(const Card& rhs) {
     this->rank = rhs.rank;
     this->suit = rhs.suit;
}



