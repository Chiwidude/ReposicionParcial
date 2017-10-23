/*
 * LinkedList.h
 *
 *  Created on: Oct 21, 2017
 *      Author: FRAN
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include<Queue.h>
#include<Stack.h>
namespace std {
struct node{
	int value;
	node *next;
};

class LinkedList : public Queue, Stack {
private:
	node *head, *tail;
	int Size = 0;
	bool isEmpty();
public:
	LinkedList();
		void addLast(int value);
		void addFirst(int value);
		int RemoveFirst();
		int getsize();
		int getFirst();
		int getLast();
		int size();
		void enqueue(int i);
		int dequeue();
		void push(int i);
		int top();
		int pop();





	virtual ~LinkedList();
};

} /* namespace std */

#endif /* LINKEDLIST_H_ */
