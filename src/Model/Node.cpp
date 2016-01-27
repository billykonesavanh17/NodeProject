/*
 * Node.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: bkon4208
 */

#include "Node.h"
#include <iostream>

template <class Type>
Node<Type> :: Node()
{
	value = 0;
	pointers = nullptr;
}

template <class Type>
Node<Type> :: Node(Type value)
{
	this -> value = 0;
	pointers = nullptr;
}

template <class Type>
Node<Type>::~Node()
{
	// TODO Auto-generated destructor stub
}

template <class Type>
Type Node<Type> :: getValue()
{
	return this -> value;
}

template <class Type>
Node<Type> * Node<Type> :: getPointers()
{
	return this -> pointers;
}

