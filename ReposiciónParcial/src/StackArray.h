/*
 * StackArray.h
 *
 *  Created on: Oct 21, 2017
 *      Author: FRAN
 */

#ifndef STACKARRAY_H_
#define STACKARRAY_H_
#include<Stack.cpp>

namespace std {

class StackArray : public Stack {
private:
int data[];

public:

static int capacity = 1000;
int t = -1;
int size();
bool isEmpty();
void push(int i);
int top();
int pop();
	StackArray();
	StackArray(int size);
	virtual ~StackArray();
	virtual ~StackArray(int size);
};

} /* namespace std */

#endif /* STACKARRAY_H_ */
