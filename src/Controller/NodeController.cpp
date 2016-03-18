/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: bkon4208
 */

#include "NodeController.h"

NodeController::NodeController()
{
	notHipsterInts = new CTECArray<int>(5);
	numbers = new CTECList<int>();
}

NodeController::~NodeController()
{

}

void NodeController :: testLists()
{
	numbers -> addToFront(3);
	numbers -> addToEnd(8);
	numbers -> addAtIndex(2, 3);
	cout << "Front should be 3 and is:  " << numbers->getFront() << endl;
	cout << "End should be 8 and is:  " << numbers->getEnd() << endl;
	cout << "At spot 3 " << numbers->getFromIndex(2) << " should be 3" <<endl;
	numbers -> removeFromFront();
	cout << "Front is now " << numbers -> getFront() << endl;
	numbers -> removeFromEnd();
	cout << "End is now " << numbers -> getEnd() << endl;
	numbers -> removeFromIndex(0);
	cout << "At spot one it is " << numbers -> getFromIndex(1) << endl;

}

void NodeController::start()
{
	testLists();

	arrayTimer.startTimer();

	for(int index = 0; index < notHipsterInts -> getSize(); index++)
	{
		notHipsterInts -> set(index, (23 * index));
	}

	for(int index = 0; index < notHipsterInts -> getSize(); index++)
	{
		cout << "notHipsterInts at index " << index << " contains " << notHipsterInts -> get(index) << endl;
	}

	arrayTimer.stopTimer();
	arrayTimer.displayTimerInformation();

}

