/*
 * main.cpp
 *
 *  Created on: Oct 21, 2017
 *      Author: FRAN
 */
 #include<iostream>
#include<StackArray.h>
#include<Problema2.h>
using namespace std;

StackArray s1;
StackArray retrive;
Problema2 tri;

int main() {

	s1.push(10);
	retrive = tri.reemplazar(s1, 10, 2);
	cout<<retrive.top()<<endl;
	return 0;
}

