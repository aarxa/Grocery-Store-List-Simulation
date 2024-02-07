/*******************************************************************************************

* Programmer: Aarya Rajgor                                                                 *

* Class: CptS 122, Fall 2022; Lab Section 05                                               *

* Programming Assignment: 05                                                               *

* Date: October 19, 2022                                                                   *

* Description: This program simulates a grocery store list.                                *

*******************************************************************************************/

#pragma once

#include "PA5.h"
#include "QueueNode.h"
#include "Data.h"


class Queue 
{
public: 

	Queue(); //default constructor
	Queue(QueueNode* head, QueueNode* tail); //value constructor
	Queue(Queue& Qobj); //copy constructor
	~Queue(); //default destructor

	//Getters
	QueueNode* getHead(void);
	QueueNode* getTail(void);

	// prints the queue
	void printQueue(QueueNode* next);
	bool isEmpty();
	// enqueue function reated based off of class code by Andrew O'Fallon.
	bool enqueue(Data& newData);
	// dequeue function reated based off of class code by Andrew O'Fallon.
	void dequeue();
	int calculateSumServiceTimes(QueueNode* next);

private:
	//private data members
	QueueNode* pHead;
	QueueNode* pTail;
};
