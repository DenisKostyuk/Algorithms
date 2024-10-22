#pragma once

#include <iostream>

class DoublyNode {
public:
	int data;
	DoublyNode* next;
	DoublyNode* prev;

	DoublyNode(int data) : data(data), next(nullptr), prev(nullptr) {};

};


