/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: bkon4208
 */

#ifndef NODECONTROLLER_H_
#define NODECONTROLLER_H_


#include <string>
#include <iostream>

#include "../Model/Node.cpp"
#include "../Model/ArrayNode.cpp"
#include "../Model/CTECArray.cpp"

using namespace std;

class NodeController
{
private:
	CTECArray<int> * notHipsterInts;
public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* NODECONTROLLER_H_ */
