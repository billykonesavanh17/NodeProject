/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: bkon4208
 */

#include "CTECArray.h"
#include <string>
using namespace std;

template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	this -> size = size;
	head = nullptr;

	if(size <= 0)
	{
		cerr << "Impossible" << endl;
		return;
	}

	for(int index = 0; index < size; index++)
	{
		if(head != nullptr)
		{
			//We have more than one ArrayNode.
			ArrayNode<Type> nextNode;
			nextNode.setNext(head);
			head = & nextNode;
		}
		else
		{
			//This is the first node in the array.
			ArrayNode<Type> first;
			head = & first;
		}
	}
}

template <class Type>
CTECArray<Type>::~CTECArray()
{
	ArrayNode<Type> * deleteMe = head;
	for(int index = 0; index < size; index++)
	{
		if(deleteMe -> getNext() != nullptr)
		{
			head = deleteMe -> getNext();
			deleteMe -> setNext(nullptr);
		}
			delete deleteMe ->getNext();
			deleteMe = head;
	}
	delete head;
}

template <class Type>
int CTECArray<Type>:: getSize()
{
	return this -> size;
}

template <class Type>
Type * CTECArray<Type>::get(int position)
{
	//bounds check for size and negative.
	if(position >= size || position < 0)
	{
		return nullptr;
	}
	else
	{
		ArrayNode<Type> * current = head;
		//Inclusive because I am inside the bounds guaranteed.
		for(int spot = 0; spot <= position; spot++)
		{
			if(spot != position)
			{
				current = current-> getNext();
			}
			else
			{
				Type temp = current-> getValue();	//Grab the value stored in the Node
				return &temp;						//Return a pointer to the value
			}
		}
	}
}

template <class Type>
void CTECArray<Type> :: set(int position, Type value)
{
		//bounds check for size and negative.
		if(position >= size || position < 0)
		{
			cerr << "Don't do this, out of bounds!!!" << endl;
		}
		else
		{
			ArrayNode<Type> * current = head;
			for(int spot = 0; spot <= position; spot++)
			{
				if(spot != position)
				{
					current = current -> getNext();
				}
				else
				{
					current -> setValue(value);
				}
			}
		}
}
