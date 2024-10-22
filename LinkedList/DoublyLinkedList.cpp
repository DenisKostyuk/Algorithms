#include <iostream>
#include "doublynode.h"
using namespace std;

class DoublyLinkedList {
public:
	DoublyNode* head;

	// DoublyNode* tail; // *****OPTIONAL ATTRIBUTE*****

	DoublyLinkedList() : head(nullptr) {};

	~DoublyLinkedList() {
		DoublyNode* curr = this->head;
		while (curr != nullptr) {
			DoublyNode* tmp = curr;
			curr = curr->next;
			delete tmp;
		}
		std::cout << "Distructor has finished deleting the whole DoublyLinkedList." << std::endl;
	}


	void addNode(int data) {
		if (this->head == nullptr) {
			this->head = new DoublyNode(data);
		} else {
			DoublyNode* curr = this->head;
			while (curr->next != nullptr) {
				curr = curr->next;
			}
			DoublyNode* newlyCreated = new DoublyNode(data);
			newlyCreated->prev = curr;
			curr->next = newlyCreated;
		}
	}

	void printDoublyLinkedList() {
		DoublyNode* curr = this->head;
		while (curr != nullptr) {
			std::cout << "[ " << curr->data << " ] " << " -> ";
			curr = curr->next;
		}
		std::cout << " nullptr" << std::endl;
	}

	void printDoublyLinkedListReversed() {
		DoublyNode* curr = this->head;
		while (curr->next != nullptr) curr = curr->next;

		while (curr != nullptr) {
			std::cout << " [ " << curr->data << " ] " << "->";
			curr = curr->prev;
		}

		std::cout << " nullptr" << std::endl;
	}


};
/*
int main() {

	DoublyLinkedList lst;
	lst.addNode(12);
	lst.addNode(55);
	lst.addNode(73);
	lst.addNode(88);
	lst.addNode(100);

	lst.printDoublyLinkedList();
	lst.printDoublyLinkedListReversed();

	return 0;
}
*/