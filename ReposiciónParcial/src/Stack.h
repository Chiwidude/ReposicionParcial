/*
 * Stack.h
 *
 *  Created on: Oct 21, 2017
 *      Author: FRAN
 */

#ifndef STACK_H_
#define STACK_H_

namespace std {

class Stack {
public:
	virtual int size();
	 virtual bool isEmpty();
	virtual void push(int i);
	virtual int top();
	virtual int pop();
	Stack();
	virtual ~Stack();
};

} /* namespace std */

#endif /* STACK_H_ */
