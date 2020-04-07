/*
 * MainDLL.cpp
 *
 *  Created on: Apr 2, 2020
 *      Author: 13027
 */


#include "Coder.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;

void valuefunc(int x);
void referencefunc(int &x);
void pointerfunc(int *x);

int main() {
	Coder code;
	int k = 2;
	valuefunc(k);
	cout << k << endl;
	k = 5;
	referencefunc(k);
	cout << k << endl;
	k = 1;

	pointerfunc(&k);
	cout << k << endl;

}

void valuefunc(int x) {
	x += 3;
}
void referencefunc(int &x) {
	x += 3;
}
void pointerfunc(int *x) {
	*x += 3;
}
