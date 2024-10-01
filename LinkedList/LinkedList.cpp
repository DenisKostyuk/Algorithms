#include <iostream>
using namespace std;

/*
Node class
*/
class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}

    void printNodeData() {
        std::cout << data << std::endl;
    }
};

/*
LinkedList class
*/
class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        Node* curr = this->head;
        while (curr != nullptr) {
            Node* temp = curr;
            curr = curr->next;
            delete temp;
        }
        std::cout << "Distruction of LinkedList has been finished" << std::endl;
    }

    void addNode(int data) {
        Node* n = new Node(data);
        if (this->head == nullptr) this->head = n;
        else {
            Node* curr = this->head;
            while (curr->next != nullptr) curr = curr->next;
            curr->next = n;
        }
    }



    bool isExist(int data) {
        Node* curr = this->head;
        while (curr != nullptr) {
            if (curr->data == data) {
                std::cout << "The data: " << data << " you are looking for is Exisiting in the LinkedList" << std::endl;
                return true;
            }
            else {
                curr = curr->next;
            }
        }
        std::cout << "The data: " << data << " you are looking for is NOT Exisiting in the LinkedList" << std::endl;
        return false;
    }

    void addInBetween(int data1, int data2, int data) {

    }

    void printLinkedList() {
        Node* curr = this->head;
        while (curr != nullptr) {
            std::cout << curr->data << " -> ";
            curr = curr->next;
        }
        std::cout << "null " << std::endl;
    }
};


int main() {
    
    LinkedList l1;
    l1.addNode(1);
    l1.addNode(2);
    l1.addNode(110);
    l1.addNode(11);
    l1.addNode(21);
    l1.addNode(33);
    
    l1.printLinkedList();
    l1.isExist(11);
    l1.isExist(400);
    l1.isExist(33);




}

