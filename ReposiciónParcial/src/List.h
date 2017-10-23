/*
 * List.h
 *
 *  Created on: Oct 22, 2017
 *      Author: FRAN
 */

#ifndef LIST_H_
#define LIST_H_

namespace std {

class List {

public:
	virtual int size();
	virtual bool isEmpty();
	virtual int get(int index);
	virtual void set(int index, int i);
	virtual void add(int index, int i);
	virtual int remove (int index);
	List();
	virtual ~List();
};

} /* namespace std */

#endif /* LIST_H_ */
