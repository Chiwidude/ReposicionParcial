/*
 * CircularList.cpp
 *
 *  Created on: Oct 20, 2017
 *      Author: FRAN
 */

struct node {
int value;
node *next;
};
class CircularLinkedList{
private:
	node *tail = 0;
	int size =0;
bool isEmpty();
public:
int getsize();
void rotate();
void addFirst(int value);
void addLast(int value);
int removeFirst();
};
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
	}
	node *temp = new node;
	temp->value = value;
	temp->next = tail->next;
	tail->next = temp;
}
void CircularLinkedList::addLast(int value) {
	addFirst(value);
	tail = tail->next;
}


