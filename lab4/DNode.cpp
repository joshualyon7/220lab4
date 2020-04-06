/*
 * DNode.cpp
 *
 *  Created on: Apr 2, 2020
 *      Author: 13027
 */

#include <stdlib.h>
#include <iostream>
#include "DNode.hpp"
using namespace std;

DNode::DNode(){
	data = -1;
	next = NULL;
	prev = NULL;
}
DNode::DNode( int x){
	data = x;
	next = NULL;
	prev = NULL;
}


