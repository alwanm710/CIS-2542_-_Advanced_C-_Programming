
#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList(){
	first = new Node();
}

LinkedList::~LinkedList(){
	delete first;
}

bool LinkedList::isEmpty(){
	return first->next == nullptr;
}

void LinkedList::addFront(int value){
	Node* newNode = new Node(value);
	newNode->next = first->next;
	first->next = newNode;
}

void LinkedList::addBack(int value){
	Node* t = first;  // traversal pointer

	// find the end of the list
	while (t->next != nullptr)
		t = t->next;

	// attach new node
	t->next = new Node(value);
}

void LinkedList::removeFront(){
	Node* t = first->next;

	first->next = t->next;

	t->next = nullptr;
	delete t;
}

void LinkedList::removeBack(){
	if (isEmpty()) return;

	Node* trailer = first;
	Node* trav = first->next;

	while (trav->next != nullptr){
		trav = trav->next;
		trailer = trailer->next;
	}

	trailer->next = nullptr;
	delete trav;
}

void LinkedList::display(){
	Node* t = first->next;

	while (t != nullptr){
		std::cout << t->data << " ";
		t = t->next;
	}
	std::cout << std::endl;
}

Node* LinkedList::find(int value){
	Node* t = first->next;

	while (t != nullptr){
		if (t->data == value)
			return t;
		t = t->next;
	}

	return nullptr;
}

void LinkedList::removeDuplicates(){
    
    Node* d = first->next;
    
    while( d != nullptr){
        int key = d->data;
        Node* trailer = d;
        Node* trav = d->next;
        while (trav != nullptr){
            if(trav->data == key){
                trailer->next = trav->next;
                trav->next = nullptr;
                delete trav;
                trav = trailer->next;
            }
            else{
                trailer = trailer->next;
                trav = trav->next;
            }
        }
        d = d->next;
    }
}