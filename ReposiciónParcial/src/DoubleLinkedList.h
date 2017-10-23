/*
 * DoubleLinkedList.h
 *
 *  Created on: Oct 21, 2017
 *      Author: FRAN
 */

#ifndef DOUBLELINKEDLIST_H_
#define DOUBLELINKEDLIST_H_

namespace std {
struct Node {
	int value;
	Node *prev;
	Node *next;
};

class DoubleLinkedList {
private:
	Node *header, *trailer;
	int size = 0;
bool isEmpty(){

return size==0;

}
void AddBetween(int val,  Node *predecessor,  Node *sucessor);
int Remove(Node *Node);
public:
DoubleLinkedList();
int getSize();
void addFirst(int value);
void addLast(int value);
int RemoveFirst();
int RemoveLast();
int getFirst();
int getLast();
bool search(int x);

	virtual ~DoubleLinkedList();
};

} /* namespace std */

#endif /* DOUBLELINKEDLIST_H_ */
