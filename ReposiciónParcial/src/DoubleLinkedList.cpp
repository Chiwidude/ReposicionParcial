/*
 * DoubleLinkedList.cpp
 *
 *  Created on: Oct 21, 2017
 *      Author: FRAN
 */

#include "DoubleLinkedList.h"

namespace std {

DoubleLinkedList::DoubleLinkedList() {
		header = new node;
		trailer = new node;
		header->next = trailer;
	}
int DoubleLinkedList::getSize() {
	return size;
}
void DoubleLinkedList:: addFirst(int value) {
	AddBetween(value,header,header->next);
}
void DoubleLinkedList:: addLast(int value) {
	AddBetween(value,trailer->prev,trailer);
}
int DoubleLinkedList:: RemoveFirst() {
	if(isEmpty()){
		return 0;
	}
	return Remove(header->next);

}
int DoubleLinkedList::RemoveLast(){
	if(isEmpty()) {
		return 0;
	}
	return Remove(trailer->prev);
}
void DoubleLinkedList:: AddBetween(int val,  node *predecessor,  node *sucessor){
	node *temp = new node;

	temp->value = val;
	temp->prev = predecessor;
	temp->next = sucessor;
	predecessor->next = temp;
	sucessor->prev = temp;
	size++;

}
int DoubleLinkedList:: Remove(node *Node){
	node *predecessor = Node->prev;
	node *sucessor = Node->next;
	predecessor->next = sucessor;
	sucessor->prev = predecessor;
	size--;

	return Node->value;
	delete Node;


	}
int DoubleLinkedList::getFirst(){
	return header->next->value;
}
int DoubleLinkedList::getLast(){
	return trailer->prev->value;
}

DoubleLinkedList::~DoubleLinkedList() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
