/*
 * Queue.h
 *
 *  Created on: Oct 21, 2017
 *      Author: FRAN
 */

#ifndef QUEUE_H_
#define QUEUE_H_

namespace std {

class Queue {
public:
	virtual int size();
	virtual bool isEmpty();
	virtual void enqueue(int e);
	virtual int first();
	virtual int dequeue();
	Queue();
	virtual ~Queue();
};

} /* namespace std */

#endif /* QUEUE_H_ */
