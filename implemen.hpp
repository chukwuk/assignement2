/****************************************
**************** Program:implemen.cpp
***************** Author:Kingsley C. Chukwu
*************** Date: 2/4/2019
*************** Description:contains all the function need to check error, output the rank and suit that corresponds to a particular integ
 * er
**************** Input: integers
************** Output: outputs strings
***************************************************/



#ifndef IMPLEMEN_H
#define IMPLEMEN_H



#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <climits>
#include <cstring>
#include <fstream>
#include <algorithm>


using namespace std;

string card_rank(int num);

string card_suit(int num);

void data_to_explore();

int check_err();

#endif

