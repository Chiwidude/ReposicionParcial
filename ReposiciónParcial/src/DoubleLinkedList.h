/*
 * DoubleLinkedList.h
 *
 *  Created on: Oct 21, 2017
 *      Author: FRAN
 */

#ifndef DOUBLELINKEDLIST_H_
#define DOUBLELINKEDLIST_H_

namespace std {
struct node {
	int value;
	node *prev;
	node *next;
};

class DoubleLinkedList {
private:
	node *header, *trailer;
	int size = 0;
bool isEmpty(){

return size==0;

}
void AddBetween(int val,  node *predecessor,  node *sucessor);
int Remove(node *Node);
public:
DoubleLinkedList();
int getSize();
void addFirst(int value);
void addLast(int value);
int RemoveFirst();
int RemoveLast();
int getFirst();
int getLast();

	virtual ~DoubleLinkedList();
};

} /* namespace std */

#endif /* DOUBLELINKEDLIST_H_ */
