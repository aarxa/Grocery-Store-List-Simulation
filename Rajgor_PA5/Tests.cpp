/*******************************************************************************************

* Programmer: Aarya Rajgor                                                                 *

* Class: CptS 122, Fall 2022; Lab Section 05                                               *

* Programming Assignment: 05                                                               *

* Date: October 19, 2022                                                                   *

* Description: This program simulates a grocery store list.                                *

*******************************************************************************************/

#include "Tests.h"

Tests::Tests()
{
	//default constructor
}

Tests::~Tests()
{
	//default destructor
}

// Function runTests(), test wrapper for test functions
void Tests::runTests(void) 
{
	testEnqueueEmpty();
	testEnqueueOneNode();
	testDequeueOneNode();
	testDequeueTwoNodes();
	runSimForHours();
}

// testEnqueueEmpty(), tests enqueue() function on empty queue
void Tests::testEnqueueEmpty(void) 
{
	cout << "Testing enqueue on an empty queue: ";
	Queue empty;
	Data* newData = new Data(1, 2, 3);
	empty.enqueue(*newData);

	if (empty.getHead()->getData()->getCustomerNumber() != newData->getCustomerNumber()) 
	{
		cout << "The enqueue did not work"<<endl;
	}
	else
	{
		cout << "Enqueue worked successfully!"<<endl;
	}
}

// testEnqueueOneNode(), tests enqueue() function on a queue with one node
void Tests::testEnqueueOneNode(void) 
{
	cout << "Testing enqueue on one node: ";
	Queue oneNode;
	Data* firstNode = new Data(1, 2, 3);
	oneNode.enqueue(*firstNode);
	Data* secondNode = new Data(2, 3, 4);
	oneNode.enqueue(*secondNode);

	if (oneNode.getTail()->getData()->getCustomerNumber() != secondNode->getCustomerNumber()) 
	{
		cout << "The enqueue did not work!"<<endl;
	}
	else
	{
		cout << "Enqueue worked successfully!"<<endl;
	}
}

// testDequeueOneNode(), tests dequeue() function on a queue with one node
void Tests::testDequeueOneNode(void) 
{
	cout << "Testing Dequeue on one node: ";
	Queue q;
	Data* d = new Data(1, 2, 3);
	q.enqueue(*d);
	q.dequeue();
	if (q.getHead() != nullptr && q.getTail() != nullptr) 
	{
		cout << "The dequeue did not work!"<<endl;
	}
	else
	{
		cout << "Dequeue worked successfully!"<<endl;
	}
}

// testDequeueTwoNodes(), tests dequeue() function on a queue with two nodes
void Tests::testDequeueTwoNodes(void) 
{
	cout << "Testing dequeue with two nodes: ";
	Queue q;
	Data* d1 = new Data(1, 2, 3);
	Data* d2 = new Data(2, 3, 4);
	q.enqueue(*d1);
	q.enqueue(*d2);
	q.dequeue();

	// Checks for d2 after dequeue (based on insertion order)
	if (q.getHead()->getData()->getCustomerNumber() != d2->getCustomerNumber())
	{
		cout << "Dequeue did not work"<<endl;
	}
	else
	{
		cout << "Dequeue worked successfully!"<<endl;
	}
}

// runSim24Hours(), uses runSimuation() function defined in PA5.h to run the simulation for 24 hours
void Tests::runSimForHours(void) 
{
	int hours = 0;
	system("pause");
	system("cls");
	cout << "Welcome to PA5!" << endl;
	cout << "The program simulates a grocery store list for the time you enter." << endl;
	cout << "All the tests of the queues have been done" << endl;
	cout << endl;
	cout << "How long do you want to run the simulation for?"<< endl;
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "BEGINNING "<<hours<<" HOUR SIMULATION : "<<endl;
	system("pause");
	runSimulation(60 * hours);
}