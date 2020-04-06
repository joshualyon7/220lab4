/*
 * Coder.hpp
 *
 *  Created on: Apr 2, 2020
 *      Author: 13027
 */

#ifndef CODER_HPP_
#define CODER_HPP_

#include "DLL.hpp"


class Coder {
	DLL codelist;
	char alpha[58]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',',','.','!','?','\''};
public:
	Coder();
	void makeList(int arr[], int size);
	void TranslateList();
	void toInts(int arr[], string s,int len);
};



#endif /* CODER_HPP_ */
