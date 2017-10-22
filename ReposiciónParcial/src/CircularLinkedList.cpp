/*
 * CircularLinkedList.cpp
 *
 *  Created on: Oct 21, 2017
 *      Author: FRAN
 */

#include "CircularLinkedList.h"

namespace std {

CircularLinkedList:: CircularLinkedList(){
	tail = 0;
}
bool CircularLinkedList:: isEmpty(){
	return size==0;
}

int CircularLinkedList::getsize(){
	return size;
}
void CircularLinkedList::rotate(){
	if(tail != 0){
		tail = tail->next;
	}
}
void CircularLinkedList::addFirst(int value) {
	if(isEmpty()){
		tail = new node;
		tail-> value = value;
		tail->next = tail;
	}else{
	node *temp = new node;
	temp->value = value;
	temp->next = tail->next;
	tail->next = temp;
	}
}
void CircularLinkedList::addLast(int value) {
	addFirst(value);
	tail = tail->next;
}
int CircularLinkedList::removeFirst(){
	if(isEmpty()) {
		return 0;
	}
	node *head = tail->next;
	if(head == tail) {
		tail = 0;
	}else {
		tail->next = head->next;

	}
	size--;
	return head->value;
	delete head;

}

CircularLinkedList::~CircularLinkedList() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
