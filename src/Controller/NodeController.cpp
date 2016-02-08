/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: bkon4208
 */

#include "NodeController.h"

NodeController::NodeController()
{
//	this -> intNode.setValue(5);
//	this -> stringArrayNode.setValue("words are fun");
//this -> otherArrayNode.setValue("linked node");
//stringArrayNode.setNext(&otherArrayNode);
	myStringArray = new CTECArray<string>(5);

}

NodeController::~NodeController() {
	// TODO Auto-generated destructor stub
}

void NodeController :: start()
{
// cout << intNode.getValue() << endl;
// cout << stringARrayNode.getValue() << endl;
// cout << (*stingArrayNod.getNext()).getValue() << endl;
	string first = "first";
	string second = "not second";
	string third = "trois";
	string forth = "yon";
	string fifth = "cinq";

	myStringArray -> set(0,first);
	cout << myStringArray -> get(0) << endl;
	myStringArray -> set(1,second);
	myStringArray -> set(2,third);
	myStringArray -> set(3,forth);
	myStringArray -> set(4,fifth);

	for(int index = 0; index < myStringArray -> getSize(); index++)
	{
		cout << "The contents at " << index << " are: " << myStringArray -> get(index) << endl;
	}
}

