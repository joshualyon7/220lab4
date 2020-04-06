/*
 * DNode.hpp
 *
 *  Created on: Apr 2, 2020
 *      Author: 13027
 */

#ifndef DNODE_HPP_
#define DNODE_HPP_

class DNode {
	friend class DLL;
	int data;
	DNode *prev;
	DNode *next;
public:
	DNode();
	DNode(int x);
};



#endif /* DNODE_HPP_ */
