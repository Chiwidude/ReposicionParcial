/*
 * QueueArray.h
 *
 *  Created on: Oct 21, 2017
 *      Author: FRAN
 */

#ifndef QUEUEARRAY_H_
#define QUEUEARRAY_H_
#include<Queue.cpp>

namespace std {

class QueueArray : public Queue {
private:
static int capacity = 1000;
int data[];
int f = 0;
int sz = 0;
int arraylength;
public:
	QueueArray();
	QueueArray(int size);
	int size();
	bool isEmpty();
	void enqueue(int i);
	int first();
	int dequeue();

	virtual ~QueueArray();
	virtual ~QueueArray(int size);
};

} /* namespace std */

#endif /* QUEUEARRAY_H_ */
