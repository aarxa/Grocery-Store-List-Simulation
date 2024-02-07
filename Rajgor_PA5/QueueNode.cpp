/*******************************************************************************************

* Programmer: Aarya Rajgor                                                                 *

* Class: CptS 122, Fall 2022; Lab Section 05                                               *

* Programming Assignment: 05                                                               *

* Date: October 19, 2022                                                                   *

* Description: This program simulates a grocery store list.                                *

*******************************************************************************************/

#pragma once
#include "QueueNode.h"

//Default constructor
QueueNode::QueueNode()
{
	pData = nullptr;
	pNext = nullptr;
}

QueueNode::QueueNode(Data* data, QueueNode* next)
{
	pData = data;
	pNext = next;
}

//Data Value Constructor
QueueNode::QueueNode(Data* data) 
{
	pData = data;
}

QueueNode::QueueNode(QueueNode& QNobj)
{
	pData = QNobj.pData;
	pNext = QNobj.pNext;
}

QueueNode::~QueueNode()
{
	//Default Destructor
}

//Getters
Data* QueueNode::getData(void)
{
	return pData;
}

//Getters
QueueNode* QueueNode::getNext(void)
{
	return pNext;
}

// Setters
void QueueNode::setData(Data* data) 
{
	pData = data;
}

//Setters
void QueueNode::setNext(QueueNode* next) 
{
	pNext = next;
}
