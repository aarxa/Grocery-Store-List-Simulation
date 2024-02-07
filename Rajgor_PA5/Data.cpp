/*******************************************************************************************

* Programmer: Aarya Rajgor                                                                 *

* Class: CptS 122, Fall 2022; Lab Section 05                                               *

* Programming Assignment: 05                                                               *

* Date: October 19, 2022                                                                   *

* Description: This program simulates a grocery store list.                                *

*******************************************************************************************/


#include "Data.h"

Data::Data()
{
	//default consturctor
	customerNumber = 0;
	serviceTime = 0;
	totalTime = 0;
}

Data::Data(int _customerNumber, int _serviceTime, int _totalTime)
{
	//value constructor
	customerNumber = _customerNumber;
	serviceTime = _serviceTime;
	totalTime = _totalTime;
}

Data::Data(Data& Dobj)
{
	customerNumber = Dobj.customerNumber;
	serviceTime = Dobj.serviceTime;
	totalTime = Dobj.totalTime;
}

Data::~Data()
{
	//destructor
}

// getter for customer number
int Data::getCustomerNumber(void) 
{
	return customerNumber;
}

// getter for service time
int Data::getServiceTime(void) 
{
	return serviceTime;
}

// getter for total time
int Data::getTotalTime(void) 
{
	return totalTime;
}