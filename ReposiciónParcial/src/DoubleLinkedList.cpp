/*
 * DoubleLinkedList.cpp
 *
 *  Created on: Oct 20, 2017
 *      Author: FRAN
 */
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
void AddBetween(int val, node *predecessor,node *sucessor);
int Remove(node *Node);
public:
	DoubleLinkedList();
int getSize();
void addFirst(int value);
void addLast(int value);
int RemoveFirst();
int RemoveLast();

};

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
void DoubleLinkedList:: AddBetween(int val, node *predecessor,node *sucessor){
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


	}




