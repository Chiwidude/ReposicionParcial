/*
 * LinkedList.cpp
 *
 *  Created on: Oct 20, 2017
 *      Author: FRAN
 */
struct node{
	int value;
	node *next;
};

class LinkedList {
private:
	node *head, *tail;
	int size = 0;
	bool isEmpty() {
		return size==0;
	}
public:
	LinkedList(){
		head = 0;
		tail = 0;
	}
	void addLast(int value) {
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
		size++;
	}
	void addFirst(int value) {
		node *temp = new node;
		temp->value = value;
		temp->next = head;
		head = temp;
		if(isEmpty()){
			tail = head;
		}
	}
	int RemoveFirst() {
		if(isEmpty()) {
			return 0;
		}
		int result = head->value;
		node *temp = new node;
		temp = head;
		head = head->next;
		delete temp;
		return result;
	}
	int getsize() {
		return size;
	}
};


