/*******************************************************************************************

* Programmer: Aarya Rajgor                                                                 *

* Class: CptS 122, Fall 2022; Lab Section 05                                               *

* Programming Assignment: 05                                                               *

* Date: October 19, 2022                                                                   *

* Description: This program simulates a grocery store list.                                *

*******************************************************************************************/

#include "PA5.h"
#include "Queue.h"

#pragma once
using std::endl;
using std::cout;
using std::cin;

class Tests
{
public:
    Tests(); //constructor
    ~Tests(); //destructor

    // Function runTests(), test wrapper for test functions
    void runTests(void);

    // testEnqueueEmpty(), tests enqueue() function on empty queue
    void testEnqueueEmpty(void);

    // testEnqueueOneNode(), tests enqueue() function on a queue with one node
    void testEnqueueOneNode(void);

    // testDequeueOneNode(), tests dequeue() function on a queue with one node
    void testDequeueOneNode(void);

    // testDequeueTwoNodes(), tests dequeue() function on a queue with two nodes
    void testDequeueTwoNodes(void);

    // runSim24Hours(), uses runSimuation() function defined in PA5.h to run the simulation for 24 hours
    void runSimForHours(void);

private:
    //data members
};