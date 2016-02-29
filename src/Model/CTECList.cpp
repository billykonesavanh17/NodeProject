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
	Type thingToRemove; //In case we need to use the value we are removing.
	assert(size > 0);
	//Create a pointer to what is after head.
	//Find the next spot
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();
	//Get what was in the head node
	thingToRemove = head -> getValue();
	//Delete what head is pointing to.
	//Remove head
	delete head;
	//Set head to the new head.
	//Move head to the next spot.
	head = newHead;

	size--;

	this -> calculateSize();
	return thingToRemove;
}

template<class Type>
Type CTECList<Type>:: removeFromEnd()
{
	Type thingToRemove;
	//Loop over size
	//or
	//Loop until getNext()->getNext() == nullptr.
	//Before return the variable call calculateSize().

	this -> calculateSize();
	return thingToRemove;
}

template<class Type>
Type CTECList<Type>:: removeFromIndex(int index)
{

	Type thingToRemove;

	assert(size > 0);
	assert(index >= 0);
	assert(index < size);
	assert(size > 0 && index >= 0 && index < size); // same as the three above

	ArrayNode<Type> * previous, deleteMe, newNext;
	if(index == 0)
	{
		thingToRemove = removeFromFront();
	}
	else if(index == size - 1)
	{
		thingToRemove = removeFromEnd();
	}
	else
	{
		for(int spot = 0; spot < index + 1; spot++)
		{

		}
	}

	this -> calculateSize();
	return thingToRemove;
}

/**
 * Calculates the size of the list by iterating over all of the nodes in the list.
 */
template<class Type>
void CTECList<Type> :: calculateSize()
{
	assert(size >= 0);

	ArrayNode<Type> * counterPointer = head;
	int count = 0;
	if(counterPointer == nullptr)
	{
		this -> size = 0;
		return;
	}
	else
	{
		count ++;
		while(counterPointer -> getNext() != nullptr)
			{
				counterPointer = counterPointer -> getNext();
				count ++;
			}
		this -> size = count;
	}

}

template<class Type>
Type CTECList<Type>:: set(int index, const Type& value)
{

}
