#pragma once
#ifndef DOUBLYNODE_H
#include <iostream>

class DoublyNode {
public:
	int data;
	DoublyNode* next;
	DoublyNode* prev;

	DoublyNode(int data) : data(data), next(nullptr), prev(nullptr) {};

};


#endif