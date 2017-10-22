/*
 * CircularLinkedList.h
 *
 *  Created on: Oct 21, 2017
 *      Author: FRAN
 */

#ifndef CIRCULARLINKEDLIST_H_
#define CIRCULARLINKEDLIST_H_

namespace std {
struct node {
int value;
node *next;
};

class CircularLinkedList {



private:
	node *tail;
	int size =0;
bool isEmpty();
public:
CircularLinkedList();
virtual ~CircularLinkedList();
int getsize();
void rotate();
void addFirst(int value);
void addLast(int value);
int removeFirst();
};


} /* namespace std */

#endif /* CIRCULARLINKEDLIST_H_ */
