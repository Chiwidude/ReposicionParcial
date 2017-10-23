/*
 * LinkedList.cpp
 *
 *  Created on: Oct 21, 2017
 *      Author: FRAN
 */

#include "LinkedList.h"

namespace std {

bool LinkedList:: isEmpty(){

			return Size==0;

}
LinkedList::LinkedList()
	{
			head = 0;
			tail = 0;
	}
void LinkedList::addLast(int value) {
	node *temp = new node;
	temp->value = value;
	temp->next = 0;
	if(isEmpty()) {
		head = temp;
		tail = temp;
		temp = 0;
	} else {
		tail->next = temp;
		tail = temp;
	}
	Size++;
}
void LinkedList::addFirst(int value){
		node *temp = new node;
		temp->value = value;
		temp->next = head;
		head = temp;
		if(isEmpty()){
			tail = head;
		}
		Size++;
	}
int LinkedList::RemoveFirst(){
	if(isEmpty()) {
		return 0;
	}
	int result = head->value;
	node *temp = new node;
	temp = head;
	head = head->next;
	Size--;
	if(Size==0) {
		tail = 0;
	}
	delete temp;
	return result;
}
int LinkedList::getsize(){
	return Size;
}
int LinkedList::getFirst(){
	return head->value;
}
int LinkedList::getLast(){
	return tail->value;
}
void LinkedList::push(int i) {
	addFirst(i);
}
int LinkedList::top() {
	return getFirst();
}
int LinkedList::pop() {
	return RemoveFirst();
}
void LinkedList::enqueue(int i) {
	addLast(i);
}
int LinkedList::dequeue(){
	return RemoveFirst();
}
LinkedList::~LinkedList() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
