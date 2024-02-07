/*******************************************************************************************

* Programmer: Aarya Rajgor                                                                 *

* Class: CptS 122, Fall 2022; Lab Section 05                                               *

* Programming Assignment: 05                                                               *

* Date: October 19, 2022                                                                   *

* Description: This program simulates a grocery store list.                                *

*******************************************************************************************/

#pragma once
#include "Queue.h"

Queue::Queue()
{
	//default construtor
	pHead = nullptr;
	pTail = nullptr;
}

Queue::Queue(Queue& Qobj)
{
	//copy constructor
	pHead = Qobj.pHead;
	pTail = Qobj.pHead;
}

Queue::Queue(QueueNode* head, QueueNode* tail)
{
	//value constructor
	pHead = head;
	pTail = tail;
}

Queue::~Queue()
{
	//destructor
}

QueueNode* Queue::getHead(void)
{
	return pHead;
}

QueueNode* Queue::getTail(void)
{
	return pTail;
}


// prints the queue recersively
void Queue::printQueue(QueueNode* next) 
{
	if (next != nullptr)
	{
		cout << "[" << next->getData()->getCustomerNumber() << "]<--";
		printQueue(next->getNext());
	}
	else
	{
		cout << endl;
	}
}

bool Queue::isEmpty() 
{
	return pHead == nullptr;
}

// enqueue function reated based off of class code by Andrew O'Fallon.
bool Queue::enqueue(Data& newData) 
{
	bool success = false;
	Data* pData = new Data(newData);
	QueueNode* node = new QueueNode(pData);
	if (pData != nullptr) 
	{
		success = true;
		if (pHead == nullptr) 
		{
			pHead = pTail = node;
		}
		else
		{
			pTail->setNext(node);
			pTail = node;
		}
	}
	return success;
}

// dequeue function reated based off of class code by Andrew O'Fallon.
void Queue::dequeue() 
{
	QueueNode* temp = nullptr;
	if (pHead == pTail) 
	{
		//one node
		temp = pHead;
		pHead = pTail = nullptr;
		delete temp;
	}
	else
	{
		//more than one node
		temp = pHead;
		pHead = pHead->getNext();
		delete temp;
	}
}

// calculateSumServiceTimes(), used in simulation to calculate the time spent in a line based on customers in front of the head.
int Queue::calculateSumServiceTimes(QueueNode* next) 
{
	int time = 0;
	if (next != nullptr) 
	{
		time = next->getData()->getServiceTime();
		return calculateSumServiceTimes(next->getNext()) + time;
	}
	return time;
}

