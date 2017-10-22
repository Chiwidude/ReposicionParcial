/*
 * QueueArray.cpp
 *
 *  Created on: Oct 21, 2017
 *      Author: FRAN
 */

#include "QueueArray.h"

namespace std {

QueueArray::QueueArray() {
data[capacity];
arraylength = capacity;

}
QueueArray::QueueArray(int size) {
data[size];
arraylength= size;

}
int QueueArray::size() {
	return sz;
}
bool QueueArray::isEmpty() {
	return (sz ==0);
}
void QueueArray::enqueue(int i) {
	int avail = (f+sz) % arraylength;
	data[avail] = i;
	sz++;
}
int QueueArray::first(){
	if(isEmpty()) {
		return 0;
	}
	return data[f];
}
int QueueArray::dequeue(){
	if(isEmpty()) {
		return 0;
	}
	int answer = data[f];
	data[f] = 0;
	f= (f+1) % arraylength;
	sz--;
	return answer;
}
QueueArray::~QueueArray() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
