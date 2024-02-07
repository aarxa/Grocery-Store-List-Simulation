/*******************************************************************************************

* Programmer: Aarya Rajgor                                                                 *

* Class: CptS 122, Fall 2022; Lab Section 05                                               *

* Programming Assignment: 05                                                               *

* Date: October 19, 2022                                                                   *

* Description: This program simulates grocery store lists.                                 *

*******************************************************************************************/


#include "PA5.h"
#include "Queue.h"
#include "Tests.h"

using std::cout;
using std::endl;

int main(void) 
{
	// Sets random number generation seed based on time given by the user 
	srand(time(NULL));

	Tests t;
	t.runTests();
	return 0;
}

void runSimulation(int minutes)
{
	int totalTimeElapsed = 0;
	int customers = 1;
	int normalLaneArrival = rand() % 5 + 1;
	int expressLaneArrival = rand() % 8 + 3;

	Queue normalLane;
	Queue expressLane;

	int minsNormal = normalLaneArrival;
	int minsExpress = expressLaneArrival;

	int normalFrontTimer = 0;
	int expressFrontTimer = 0;

	// Simulation Loop Executes Once Per "Minute"
	do
	{
		if (normalFrontTimer < 0 && !normalLane.isEmpty())
		{
			normalFrontTimer = normalLane.getTail()->getData()->getServiceTime();
		}

		if (expressFrontTimer < 0 && !expressLane.isEmpty())
		{
			expressFrontTimer = expressLane.getTail()->getData()->getServiceTime();
		}

		if (minsNormal == 0) 
		{
			int serviceTime = rand()%5 + 1;
			int sumTimes = normalLane.calculateSumServiceTimes(normalLane.getHead());
			int totalTime = serviceTime + sumTimes;
			Data* customer = new Data(customers++, serviceTime, totalTime);
			cout << "Customer number " << customer->getCustomerNumber() << " has entered the Normal Lane at " << totalTimeElapsed << "m." << endl;
			normalLane.enqueue(*customer);
			minsNormal = rand() % 5 + 1;
		}
		else
		{
			minsNormal--;
		}

		if (minsExpress == 0) 
		{
			// Add customer into express line
			int serviceTime = rand() % 8 + 3;
			int sumTimes = expressLane.calculateSumServiceTimes(expressLane.getHead());
			int totalTime = serviceTime + sumTimes;
			Data* customer = new Data(customers++, serviceTime, totalTime);
			cout << "Customer number " << customer->getCustomerNumber() << " has entered the Express Lane at " << totalTimeElapsed << "m." << endl;
			expressLane.enqueue(*customer);

			minsExpress = rand() % 8 + 3;
		}
		else
		{
			minsExpress--;
		}

		if(normalFrontTimer == 0 && !normalLane.isEmpty())
		{
			cout << "Customer number " << normalLane.getHead()->getData()->getCustomerNumber() << " has finished checking out of the Normal Lane." << endl;
			int time = normalLane.getHead()->getData()->getTotalTime();
			cout << "They were in line for " << time << "m and left at " << totalTimeElapsed << "m." << endl << endl;;
			normalLane.dequeue();
			if (!normalLane.isEmpty())
				normalFrontTimer = normalLane.getTail()->getData()->getServiceTime();
			else
				normalFrontTimer = 0;
		}

		if (expressFrontTimer == 0 && !expressLane.isEmpty())
		{
			cout << "Customer number " << expressLane.getHead()->getData()->getCustomerNumber() << " has checked out of the Express Lane." << endl;
			int time = expressLane.getHead()->getData()->getTotalTime();
			cout << "They were in line for " << time << "m and exited at " << totalTimeElapsed << "m." << endl << endl;
			expressLane.dequeue();
			if (!expressLane.isEmpty())
				expressFrontTimer = expressLane.getTail()->getData()->getServiceTime();
			else
				expressFrontTimer = 0;
		} 

		if (totalTimeElapsed % 10 == 0)
		{
			cout << "TIME ELAPSED: " << totalTimeElapsed << "m" << endl;
			cout << "NORMAL LANE:" << endl;
			normalLane.printQueue(normalLane.getHead());
			cout << "EXPRESS LANE:" << endl;
			expressLane.printQueue(expressLane.getHead());
		}

		totalTimeElapsed++;
		normalFrontTimer--;
		expressFrontTimer--;

	}while(totalTimeElapsed < minutes);
}