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
	numbers -> addToFront(50);
	numbers -> addToEnd(8);
	cout << "End should be 8 and is:  " << numbers->getFront() << endl;
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

