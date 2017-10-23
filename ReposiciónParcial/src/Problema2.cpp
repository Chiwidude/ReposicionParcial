/*
 * Problema2.cpp
 *
 *  Created on: Oct 22, 2017
 *      Author: FRAN
 */

#include <Problema2.h>


namespace std {

Problema2::Problema2() {


}
StackArray Problema2::reemplazar(StackArray pila, int f, int s) {
	StackArray temp;
	for(int i = 0; i<pila.size();i++){
		int temp1 = pila.pop();
		if(temp1 == f) {
			temp.push(s);
		} else {
			temp.push(temp1);
		}


	}
	return temp;
}

Problema2::~Problema2() {

}

} /* namespace std */
