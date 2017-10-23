/*
 * ArrayList.h
 *
 *  Created on: Oct 22, 2017
 *      Author: FRAN
 */

#ifndef ARRAYLIST_H_
#define ARRAYLIST_H_
#include <List.h>
namespace std {

class ArrayList : public List {


private:
static const int capacity = 1000;
int data[capacity];
int sz = 0;

public:

	ArrayList();
	int size();
	 bool isEmpty();
	 int get(int index);
	 void set(int index, int i);
	 void add(int index, int i);
	 int remove (int index);
	virtual ~ArrayList();
};

} /* namespace std */

#endif /* ARRAYLIST_H_ */
