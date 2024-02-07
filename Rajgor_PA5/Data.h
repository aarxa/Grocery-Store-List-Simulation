/*******************************************************************************************

* Programmer: Aarya Rajgor                                                                 *

* Class: CptS 122, Fall 2022; Lab Section 05                                               *

* Programming Assignment: 05                                                               *

* Date: October 19, 2022                                                                   *

* Description: This program simulates a grocery store list.                                *

*******************************************************************************************/

#pragma once

#include "PA5.h"

class Data
{
public:
    Data(); //default constructor
    Data(int _customerNumber, int _serviceTime, int _totalTime); //value constructor
    Data(Data& Dobj); //copy constructor
    ~Data(); //default destructor

    //Getters
    int getCustomerNumber(void);
    int getServiceTime(void);
    int getTotalTime(void);

private:
    int customerNumber;
    int serviceTime;
    int totalTime;
};

