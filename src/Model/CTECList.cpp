/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: bkon4208
 */

#include "CTECList.h"
#include <assert.h>

template<class Type>
CTECList<Type>::CTECList()
{
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;
}

template<class Type>
CTECList<Type>::~CTECList()
{
	// TODO Auto-generated destructor stub
}

template<class Type>
int CTECList<Type>:: getSize()
{

}

template<class Type>
void CTECList<Type>:: addToFront(const Type& value)
{

}

template<class Type>
void CTECList<Type>:: addToEnd(const Type& value)
{

}

template<class Type>
void CTECList<Type>:: addAtIndex(int index, const Type& value)
{

}

template<class Type>
Type CTECList<Type>:: getFront()
{

}

template<class Type>
Type CTECList<Type>:: getEnd()
{

}

template<class Type>
Type CTECList<Type>:: getFromIndex(int index)
{

}

template<class Type>
Type CTECList<Type>:: removeFromFront()
{
	Type returnValue; //In case we need to use the value we are removing.
	assert(size > 0);
	//Create a pointer to what is after head.
	//Find the next spot
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();
	//Get what was in the head node
	returnValue = head -> getValue();
	//Delete what head is pointing to.
	//Remove head
	delete head;
	//Set head to the new head.
	//Move head to the next spot.
	head = newHead;
	return returnValue;
}

template<class Type>
Type CTECList<Type>:: removeFromEnd()
{
	//Loop over size
	//or
	//Loop until getNext()->getNext() == nullptr.
}

template<class Type>
Type CTECList<Type>:: removeFromIndex(int index)
{
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head -> getNext();
	for(int index = 0; index < size; index++)
	{

	}
}

template<class Type>
Type CTECList<Type>:: set(int index, const Type& value)
{

}
