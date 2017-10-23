/*
 * Problema3.cpp
 *
 *  Created on: Oct 22, 2017
 *      Author: FRAN
 */

#include <Problema3.h>

namespace std {

Problema3::Problema3() {


}
void Problema3::Ordenamiento(ArrayList List){
	int pos, aux;
	for(int i=0;i<5;i++){

			pos = i;
			aux = List.get(i);

			while((pos>0) && (List.get(pos-1) > aux)){
				 List.set(pos,List.get(pos-1));
				pos--;
			}
			List.set(pos, aux);
		}
}

ArrayList Problema3::mezclar(ArrayList list1, ArrayList list2) {

	ArrayList result;
	for(int i = 0; i<list1.size(); i++) {
		result.add(0, list1.remove(0));
	}
	for(int i = list1.size();i<list2.size();i++) {
		result.add(0,list2.remove(0));
	}
	Ordenamiento(result);
	return result;
}


Problema3::~Problema3() {

}

} /* namespace std */
