#pragma once

#include "Node.h"
#include <iostream>

template <class T>
class ListIterator{
private:
	Node<T>* current;

public:
	ListIterator(Node<T>* n){
		current = n;
	}

	bool next(){
		if (current->next != nullptr){
			current = current->next;
			return true;
		}
		return false;
	}

	T getValue(){
		return current->data;
	}
};

template <class T >
class LinkedList{
private:
	Node<T>* first;

public:
	LinkedList(){
		first = new Node<T>();
	}

	~LinkedList(){
		delete first;
	}

	bool isEmpty(){
		return first->next == nullptr;
	}

	void addFront(T value){
		Node<T>* newNode = new Node<T>(value);
		newNode->next = first->next;
		first->next = newNode;
	}

	void addBack(T value){
		Node<T>* t = first;  // traversal pointer

		// find the end of the list
		while (t->next != nullptr)
			t = t->next;

		// attach new node
		t->next = new Node<T>(value);
	}

	void removeFront(){
		Node<T>* t = first->next;

		first->next = t->next;

		t->next = nullptr;
		delete t;
	}

	void removeBack(){
		if (isEmpty()) return;

		Node<T>* trailer = first;
		Node<T>* trav = first->next;

		while (trav->next != nullptr){
			trav = trav->next;
			trailer = trailer->next;
		}

		trailer->next = nullptr;
		delete trav;
	}

	void display(){
		Node<T>* t = first->next;

		while (t != nullptr){
			std::cout << t->data << " ";
			t = t->next;
		}
        
		std::cout << std::endl;
	}

	Node<T>* find(T value){
		Node<T>* t = first->next;

		while (t != nullptr){
			if (t->data == value)
				return t;
			t = t->next;
		}

		return nullptr;
	}

	ListIterator<T>* getIterator(){
		ListIterator<T>* iter = new ListIterator<T>(first);
		return iter;
	}

	void removeDuplicates(){
		Node<T>* temp = first->next;
		while (temp != nullptr){
			T searchKey = temp->data;
			Node<T>* trailer = temp;
			Node<T>* searchPtr = temp->next;

			while (searchPtr != nullptr){
				if (searchPtr->data == searchKey){
					trailer->next = searchPtr->next;
					searchPtr->next = nullptr;
					delete searchPtr;
					searchPtr = trailer->next;
				}
				else{
					trailer = searchPtr;
					searchPtr = searchPtr->next;
				}
			}
			temp = temp->next;
		}
	}
};