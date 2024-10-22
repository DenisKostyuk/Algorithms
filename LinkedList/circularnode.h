#pragma once
using namespace std;
#include <iostream>

class CircularNode {
public:
	int data;
	CircularNode* next;

	CircularNode(int data) : data(data), next(nullptr) {};

	void printData() {
		std::cout << "The data of the current Node is : " << this->data << std::endl;
	}
};




