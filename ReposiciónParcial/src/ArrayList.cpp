/*
 * ArrayList.cpp
 *
 *  Created on: Oct 22, 2017
 *      Author: FRAN
 */

#include <ArrayList.h>

namespace std {


ArrayList::ArrayList() {


}

int ArrayList::size(){
	return sz;
}
bool ArrayList::isEmpty(){
	return (sz ==0);
}
int ArrayList::get(int index) {
 return data[index];
}
void ArrayList::set(int index, int i) {

	data[index] = i;

}
void ArrayList::add(int index, int i) {
	for(int k = sz-1;k>index; k--) {
		data[k+1] = data[k];
	}
	data[index] = i;
	sz++;
}
int ArrayList::remove(int index) {
	int temp = data[index];
	for(int k=index; k <sz-1; k++) {
		data[sz-1] = 0;
	}
	sz--;
	return temp;
}

ArrayList::~ArrayList() {

}

} /* namespace std */

