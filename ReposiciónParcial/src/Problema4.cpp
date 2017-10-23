/*
 * Problema4.cpp
 *
 *  Created on: Oct 22, 2017
 *      Author: FRAN
 */

#include <Problema4.h>

namespace std {
bool Problema4::comprobacion(LinkedList listasimple, DoubleLinkedList listadoble){
	bool compare;
	int compare1 = listasimple.getsize();
	int centinel = 0;
for(int i = 0; i <listasimple.getsize(); i++){
	compare = listadoble.search(listasimple.RemoveFirst());
	if(compare == true) {
		centinel++;
	}
}
	if(centinel == compare1) {
		return true;
	}else{
	return false;
	}

}


Problema4::Problema4() {
	// TODO Auto-generated constructor stub

}

Problema4::~Problema4() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
