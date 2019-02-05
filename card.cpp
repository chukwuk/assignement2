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
void Card::set_values (int x, int y) {
    this->rank = y;
    this->suit = x;
}

void Card::print_student() {
    cout <<"The rank is "<<this->rank<<endl;
    cout<<"The suit is "<<this->suit<<endl;
}


void Card::operator=(const Card& rhs) {
     this->rank = rhs.rank;
     this->suit = rhs.suit;
}



