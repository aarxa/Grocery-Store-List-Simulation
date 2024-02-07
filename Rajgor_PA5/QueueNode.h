/*******************************************************************************************

* Programmer: Aarya Rajgor                                                                 *

* Class: CptS 122, Fall 2022; Lab Section 05                                               *

* Programming Assignment: 05                                                               *

* Date: October 19, 2022                                                                   *

* Description: This program simulates a grocery store list.                                *

*******************************************************************************************/

#pragma once

#include "PA5.h"
#include "Data.h"

class QueueNode 
{
public:

	QueueNode(); //default constructor
	QueueNode(Data* data, QueueNode* next); //value constructor
	QueueNode(Data* data); //value constructor just data
	QueueNode(QueueNode& QNobj); //copy constructor
	~QueueNode(); //default destructor

	//GETTERS
	Data* getData(void);
	QueueNode* getNext(void);

	//SETTERS
	void setData(Data* data);
	void setNext(QueueNode* next);
	
private:
	Data* pData;
	QueueNode* pNext;
};