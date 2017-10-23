/*
 * DoubleLinkedList.cpp
 *
 *  Created on: Oct 21, 2017
 *      Author: FRAN
 */

#include "DoubleLinkedList.h"

namespace std {

DoubleLinkedList::DoubleLinkedList() {
		header = new Node;
		trailer = new Node;
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
void DoubleLinkedList:: AddBetween(int val,  Node *predecessor,  Node *sucessor){
	Node *temp = new Node;

	temp->value = val;
	temp->prev = predecessor;
	temp->next = sucessor;
	predecessor->next = temp;
	sucessor->prev = temp;
	size++;

}
int DoubleLinkedList:: Remove(Node *nnode){
	Node *predecessor = nnode->prev;
	Node *sucessor = nnode->next;
	predecessor->next = sucessor;
	sucessor->prev = predecessor;
	size--;

	return nnode->value;
	delete nnode;


	}
int DoubleLinkedList::getFirst(){
	return header->next->value;
}
int DoubleLinkedList::getLast(){
	return trailer->prev->value;
}
bool DoubleLinkedList::search(int x) {
	char flag = 'F';
	Node *current = new Node;
	current = header;
	while((current != 0) && (flag =='F')){
		if(current->value == x){
			flag = 'V';

		}
		current = current->next;

	}
	if(flag == 'V') {
				return true;
			}else {
			return false;
}

}
DoubleLinkedList::~DoubleLinkedList() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
