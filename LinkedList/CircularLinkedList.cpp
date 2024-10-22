#include "iostream"
#include "circularnode.h"

using namespace std;

class CircularLinkedList {
public:
	CircularNode* head;
	CircularNode* tail;

	CircularLinkedList() : head(nullptr), tail(nullptr) {};

	~CircularLinkedList() {
		CircularNode* curr = this->head;
		while (curr != this->tail) {
			CircularNode* tmp = curr;
			curr = curr->next;
			delete tmp;
		}
		delete this->tail;

	}

	void addNode(int data) {
		CircularNode* n = new CircularNode(data);
		if (this->head == nullptr) {
			this->head = n;
			this->tail = n;
			tail->next = this->head;
		}else{
			CircularNode* tmp = this->head;
			while (tmp != this->tail) {
				tmp = tmp->next;
			}
			tmp->next = n;
			this->tail = tmp->next;
			this->tail->next = this->head;
		}
	}

	

	void printCircularList() {
		if (this->head == nullptr) return;
		CircularNode* tmp = this->head;
		do {
			std::cout << tmp->data << " -> ";
			tmp = tmp->next;
		} while (tmp != this->head);

		std::cout << "(back to head)\n";
	}
	CircularNode* search(CircularNode* n) {

		return nullptr;
	}
};



int main() {

	CircularNode n1(1);
	CircularNode n2(2);
	CircularNode n3(3);
	CircularNode n4(4);
	CircularNode n5(5);
	n4.printData();

	CircularLinkedList lst;
	lst.addNode(1);
	lst.addNode(2);
	lst.addNode(3);
	lst.addNode(4);
	lst.addNode(5);

	lst.printCircularList();
	return 0;
}
