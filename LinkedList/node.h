#pragma once
#ifndef NODE_H
#define NDDE_h

#include <iostream>

class Node {
public:
	int data;
	Node* next;

	Node(int data) : data(data), next(nullptr) {

	}
};

#endif