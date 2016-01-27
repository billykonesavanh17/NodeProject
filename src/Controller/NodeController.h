/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: bkon4208
 */

#ifndef NODECONTROLLER_H_
#define NODECONTROLLER_H_

#include "../Model/Node.h"

class NodeController {
private:
	Node<int> myNode;
public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* NODECONTROLLER_H_ */
