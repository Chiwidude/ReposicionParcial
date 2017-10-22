/*
 * StackArray.h
 *
 *  Created on: Oct 21, 2017
 *      Author: FRAN
 */
#include<Stack.cpp>
#ifndef STACKARRAY_H_
#define STACKARRAY_H_


namespace std {

class StackArray : public Stack {
private:
	static const int capacity = 1000;
int data[capacity];

public:


int t = -1;
int size();
bool isEmpty();
void push(int i);
int top();
int pop();
	StackArray();
	StackArray(int size);
	virtual ~StackArray();

};

} /* namespace std */

#endif /* STACKARRAY_H_ */
