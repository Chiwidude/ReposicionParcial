/*
 * LinkedList.h
 *
 *  Created on: Oct 21, 2017
 *      Author: FRAN
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

namespace std {
struct node{
	int value;
	node *next;
};

class LinkedList {
private:
	node *head, *tail;
	int size = 0;
	bool isEmpty();
public:
	LinkedList();
		void addLast(int value);
		void addFirst(int value);
		int RemoveFirst();
		int getsize();
		int getFirst();
		int getLast();
	virtual ~LinkedList();
};

} /* namespace std */

#endif /* LINKEDLIST_H_ */
