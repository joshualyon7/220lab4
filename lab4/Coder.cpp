/*
 * Coder.cpp
 *
 *  Created on: Apr 2, 2020
 *      Author: 13027
 */

#include "Coder.hpp"
//#include <DLL.hpp>
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

Coder::Coder() {
	cout <<"***************************************************************************" << endl;
	cout << "Part 1:" << endl;
//		Part 1:  In the DLL.cpp class, get push, pop, addFirst, and addAtFront working for a doubly linked list.
//     I've given you the test cases.  You should get the output I've given you for part 1.
//		When you get those methods working, running this will decode the secret code 1
	int arr[7] = {15,4,13,6,20,8,13};
	makeList(arr,7);
	codelist.printList();
	codelist.printCode();

/*********************/
	cout << "Part 1 Testing:" << endl;
	int arr2[29]={26, 27, 26, 41, 46, 40, 35, 26, 33, 40, 35, 40, 44, 47, 46, 26, 31, 44, 57, 47, 41, 51, 26, 53, 30, 44, 41, 5, 59};
	int arr3[10] = {54,26,18,46,41,42,26,35,46,55};
	int i = 0;
	for (; i < 10; i++) {
		codelist.push(arr3[i]);
		codelist.printList();
		codelist.addAtFront(arr2[i]);
		codelist.printList();
	}
	for (;i<29;i++) {
		codelist.addAtFront(arr2[i]);
	}
	codelist.printList();
	codelist.printCode();

/************/
	cout << endl<<"PART 1 Secret Code: " << endl;
	int arra[1] = {26};
	int arrb[10] = {30,35,27,44,32,27,26,39,57,8};
	int arrc[23] = {8, 26, 29, 27, 40, 57, 46, 26, 30, 41, 26, 46, 34, 27, 46, 26, 3, 27,48,31,12,17,2};
	cout << "gets below arrays"<< endl;
	makeList(arra,1);
	cout << "makes list arra" << endl;
	for (int i = 0; i < 10; i++) {
		codelist.push(arrc[i]);
		codelist.addAtFront(arrb[i]);
	}
	for (int i = 0; i < 13; i++) {
		codelist.push(arrc[i+10]);
	}
	for (int i=0; i < 3; i++) {
		codelist.pop();
	}
	cout << "below for loops" << endl;
	codelist.printCode();
	codelist.printList();
	int darr[0];
	makeList(darr,0);
	cout <<"***************************************************************************" << endl;
//	cout << "Part 2: "<<endl;
//////		Part 2: Get  the DLL.cpp methods insertAt and removeAtK methods working for a doubly linked list.
//////		I've given you the test cases and the output.  When you get them working, you should be able to run
//////		this and decode the second secret code
//	cout << "Part 2 Testing:" << endl;
//	codelist.addFirst(0);
//	codelist.printList();
//	codelist.insertAt(1,1);
//	codelist.printList();
//	codelist.insertAt(2,3);
//	codelist.printList();
//	codelist.insertAt(2,2);
//	codelist.printList();
//	codelist.push(4);
//	codelist.printList();
//	codelist.insertAt(2,42);
//	codelist.printList();
//	codelist.removeAtK(2);
//	codelist.printList();
//	codelist.removeAtK(0);
//	codelist.printList();
//	codelist.removeAtK(3);
//	codelist.printList();
//	codelist.removeAtK(0);
//	codelist.printList();
//	codelist.removeAtK(1);
//	codelist.printList();
//	codelist.removeAtK(0);
//	codelist.printList();
//	/******************************/
//	cout <<endl<< "PART 2 Secret Code: " << endl;
////	int arrd[19] = {20, 45, 31, 26, 46, 34, 31, 26, 32, 41, 44, 29, 31, 53, 26, 11, 47, 37, 31};
////	codelist.addFirst(32);
////	for (int i = 0; i < 10; i++) {
////		codelist.push(i);
////	}
////	for (int i = 1; i < 11; i++) {
////		codelist.insertAt(i*2,arrd[i]);
////	}
////	for (int i = 11; i< 19; i++) {
////		codelist.push(arrd[i]);
////	}
////	codelist.removeAtK(0);
////	codelist.insertAt(0,20);
////	for (int i = 19; i >= 1; i-=2) {
////		codelist.removeAtK(i);
////	}
////	codelist.printCode();
//	cout << "*****************************************************************" << endl;
//	cout << "Part 3: "<<endl;
//	//		Part 3: For this part, you will get the method reverse working for the DLL doubly linked list class.
//	//		This method reverses the list.  Note: it doesn't just print out the list in reverse order, it actually
//	//		reverses the list, so if the original list was 3<->2<->4<->8, with 3 being first and 8 being last, the
//	//		reversed list would be 8<->4<->2<->3 with 8 being first and 3 being last.
//	makeList(darr,0);
//	cout << "Part 3 Testing:" << endl;
//	for (int i = 0; i< 7; i++){
//		codelist.push(i);
//	}
//	codelist.printList();
//	codelist.reverse();
//	codelist.printList();
//	codelist.reverse();
//	codelist.printList();
///**************************/
////	cout <<endl<< "PART 3 Secret Code: " << endl;
////	for (int i = 0; i < 7; i++) {
////		codelist.pop();
////	}
////	int arrf[13] = {54, 46, 41, 41, 44, 6, 26, 31, 44, 27, 26, 31, 22};
////	for (int i = 0; i < 13; i++) {
////		codelist.push(arrf[i]);
////	}
////	codelist.reverse();
////	codelist.printCode();
//	cout << "*****************************************************************" << endl;
//	cout << "Part 4: "<<endl;
//////		Part 4: For this part, you will write the method removeX, which removes the first
////// 		occurrence of x from the list and, using call by pointer, sets ind to be the index
//////		of the first occurrence of x in the list.
//////
//	int arr4[11]={3,33,35,6,44,27,32,32,31,9,1};
//	makeList(arr4,11);
//	codelist.printList();
//	cout << "Part 4 Testing: "<<endl;
//	int ind;
//	int k = 6;
//	cout << "removing: " << k << endl;
//	codelist.removeX(k, &ind);
//	cout << "Ind is "<<ind<<endl;
//	codelist.printList();
//	k = 3;
//	cout << "removing: " << k << endl;
//	codelist.removeX(k,&ind);
//	cout << "Ind is "<<ind<<endl;
//	codelist.printList();
//	k = 0;
//	cout << "removing: " << k << endl;
//	codelist.removeX(k,&ind);
//	cout << "Ind is "<<ind<<endl;
//	codelist.printList();
//	k = 1;
//	cout << "removing: " << k << endl;
//	codelist.removeX(k,&ind);
//	cout << "Ind is "<<ind<<endl;
//	codelist.printList();
//	k = 9;
//	cout << "removing: " << k << endl;
//	codelist.removeX(k,&ind);
//	cout << "Ind is "<<ind<<endl;
//	codelist.printList();
//	codelist.printCode();
//
//	/******************************/
////	cout << "Part 4 Secret Code:" << endl;
////
////	int arry[100] = {85,82,21,28,17,1, 98,62,92,76,
////					 46,91,71,27,32,56,6, 36,60,39,
////					 35,43,51,2, 95,5, 87,9, 61,74,
////					 14,70,54,24,84,4, 44,53,20,7,
////					 72,96,8 ,90,55,86,59,57,97,93,
////					 42,83,47,99,80,73,89,3 ,40,13,
////					 26,18,64,67,48,45,52,15,22,41,
////					 88,34,25,31,81,50,49,94,69,77,
////					 16,23,12,29,75,30,38,11,78,37,
////					 63,10,65,58,99,19,33,79,68,66};
////	makeList(arry,100);
////	int remarr[10] = {74,87,61,96,8,90,86,85,64,52};
////	int blankarr[10];
////	int currind;
////	for (int k = 0; k < 10; k++) {
////		codelist.removeX(remarr[k],&currind);
////		blankarr[k] = currind;
////	}
////	int arrs[230]={44,35,33,34,46,53,57,26,45,27,35,30,26,3 ,31,31,42,26,19,34,
////				   41,47,33,34,46,54,26,57,19,34,31,26,0, 40,45,49,31,44,26,46,
////				   41,26,46,34,31,26,6, 44,31,27,46,26,16,47,31,45,46,35,41,40,
////				   54,54,54,14,32,26,11,35,32,31,53,26,46,34,31,26,20,40,35,48,
////				   31,44,45,31,26,27,40,30,26,4, 48,31,44,51,46,34,35,40,33,54,
////				   54,54,57,26,45,27,35,30,26,3, 31,31,42,26,19,34,41,47,33,34,
////				   46,26,57,54,54,54,8, 45,54,54,54,57,26,45,27,35,30,26,3, 31,
////				   31,42,26,19,34,41,47,33,34,46,53,26,27,40,30,26,42,27,47,45,
////				   31,30,54,26,57,54,54,54,8, 45,54,54,54,5, 41,44,46,51,26,19,
////				   49,41,53,57,26,45,27,35,30,26,3 ,31,31,42,26,19,34,41,47,33,
////				   34,46,53,26,49,35,46,34,26,35,40,32,35,40,35,46,31,26,39,27,
////				   36,31,45,46,51,26,27,40,30,26};
////	makeList(arrs,230);
////	for (int k = 0; k < 10; k+=2) {
////		codelist.push(blankarr[k]);
////		codelist.addAtFront(blankarr[k+1]);
////	}
////	codelist.printCode();
//
//	cout << "*****************************************************************" << endl;
//	cout << "Part 5: "<<endl;
//////		Part 5: For this part, you will get the method skip working for the DLL doubly linked list class.
//////		This method deletes every other node starting with the second node in the list.  In other words,
//////		if the list was 3<->2<->4<->5<->1<->7, the list that would result after the skip method was
//////		called would be: 3<->4<->1
//////		NOTE:  For efficiency's sake, this method SHOULD NOT call removeAtK
//	makeList(darr,0);
//	for (int i = 0; i < 10; i++) {
//		codelist.push(i);
//	}
//	/******************************************/
//	cout <<"Part 5 testing:" << endl;
//	codelist.printList();
//	codelist.skip(true,0,codelist.first);
//	codelist.printList();
//	codelist.skip(false,0,codelist.first);
//	codelist.printList();
//	/******************************************/
//	cout << "PART 5 Secret Code: " << endl;
////	int arre[126] = {19,12,34,17,31,16,26,34,45,42,34,51,35,8,42,1,26,13,34,16,47,27,40,17,33,12,26,19,35,34,40,42,26,39,46,17,34,18,31,21,26,51,45,23,37,13,51,2,26,18,35,19,40,33,26,27,39, 49,47,51,29,3,34,4,26,17,46,1,34,19,31,22,26,25,45,24,27,22,39,18,31,14,26,11,49,9,27,7,51,3,26,50,46,48,34,44,27,43,46,42,26,38,28,36,44,38,35,32,29,17,37,14,45,12,26,8,30,6,41,4,40,2,57,42,46,42};
////	for (int i = 0; i < 3; i++) {
////		codelist.pop();
////	}
////	for (int i = 0; i < 126; i++) {
////		codelist.push(arre[i]);
////	}
////	codelist.skip(false,0,codelist.first);
////	codelist.printCode();
////
////	int arrg[114] ={12,22,0,31,17,26,22,30,9,31,3,39,42,27,16,40,21,30,95,26,13,44,12,35,31,33,34,35,15,30,17,38,12,51,3,26,4,30,20,31,11,32,16,35,9,40,1,31,54,30,36,26,42,27,25,44,16,31,26,27,28,45,13,26,29,41,21,32,31,26,41,30,36,41,8,47,11,28,27,46,35,26,3,27,10,40,34,30,4,26,28,47,23,40,19,29,10,31,20,44,12,46,66,27,16,35,5,40,24,46,42,51,67,55};
////	cout << endl<<"Secret Code 2:"<<endl;
////	makeList(arrg,114);
////	codelist.skip(true,0,codelist.first);
////	codelist.printCode();
	cout << "*****************************************************************" << endl;
}
void Coder::makeList(int arr[], int size) {
	while (codelist.size > 0) {
		codelist.pop();
	}
	cout << "while loop ended" << endl;
	for (int i = 0; i < size; i++) {
		codelist.push(arr[i]);
	}
}




