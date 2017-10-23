/*
 * StackArray.cpp
 *
 *  Created on: Oct 21, 2017
 *      Author: FRAN
 */

#include "StackArray.h"

namespace std {


StackArray::StackArray() {


}

StackArray::~StackArray() {

}
bool StackArray::isEmpty() {
	return (t== -1);
}
void StackArray::push(int i) {
	data[++t] = i;
}
int StackArray::size() {
	return t+1;
}
int StackArray::top(){
	if(isEmpty()){
		return 0;
	}
	return data[t];
}
int StackArray::pop(){
	if(isEmpty()) {
		return 0;
	}
	int response = data[t];
	data[t]= 0;
	t--;
	return response;
}

} /* namespace std */
