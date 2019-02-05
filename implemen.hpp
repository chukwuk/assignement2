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

/******************************************************
 ****************************** Function:card_rank
 ***************************** Description:return a rank string corresponding to a number
 ***************************** Parameters: integer
 ****************************** Pre-Conditions: integer
 ****************************** Post-Conditions: return a string that corresponds to a rank
 ********************************************************************************/


string card_rank(int num);


/*****************************************************
 **************************** Function:card_suit
 **************************** Description:return a suit string corresponding to a number
 *************************** Parameters: integer
 **************************** Pre-Conditions: integer
 **************************** Post-Conditions: return a string
 ******************************************************************************/


string card_suit(int num);


/******************************************************
 **************************** Function:data_to_explore
 **************************** Description:prints out the number needed to access a rank
 **************************** Parameters: none
 **************************** Pre-Conditions: none
 **************************** Post-Conditions: none
 *******************************************************************************/


void data_to_explore();



/******************************************************
 *************************** Function:check_err
 *************************** Description:checks for input errors
 *************************** Parameters: none
 **************************** Pre-Conditions: none
 *************************** Post-Conditions: returns the input
 ******************************************************************************/

int check_err();

#endif

