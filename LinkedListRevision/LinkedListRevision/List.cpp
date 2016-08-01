#include "List.h"
#include <iostream>

List::List() {
	head = NULL;
}

List::List(const List& newList) {
	Node *tempPtr = newList.head;

	while (tempPtr != NULL) {
		add(tempPtr->movie.getMovieId(), tempPtr->movie.getMovieTitle());
		tempPtr = tempPtr->next;
	}
}

List::~List() {
	Node *tempPtr = NULL;

	while (head) {
		tempPtr = head;
		head = head->next;
		delete tempPtr;
	}
}

void List::add(int id, string title) {
	Node *newNode = new Node(id, title);

	if (head == NULL) {
		head = newNode;
	}
	else {
		Node *tempPtr = NULL;

		for (tempPtr = head; tempPtr->next; tempPtr = tempPtr->next);
		tempPtr->next = newNode;
	}
}

void List::deleteLast() {
	Node *leadPtr = head;
	Node *trailPtr = NULL;

	while (leadPtr->next != NULL) {
		trailPtr = leadPtr;
		leadPtr = leadPtr->next;
	}

	trailPtr->next = NULL;
	delete leadPtr;
}

void List::deleteTitle(string title) {
	Node *leadPtr = head;
	Node *trailPtr = NULL;

	if (head->movie.getMovieTitle() == title) {
		head = head->next;
		delete leadPtr;
	}
	else {

		while (leadPtr != NULL && leadPtr->movie.getMovieTitle() != title) {
			trailPtr = leadPtr;
			leadPtr = leadPtr->next;
		}
		if (leadPtr->movie.getMovieTitle() == title) {
			trailPtr->next = leadPtr->next;
			delete leadPtr;
		}
	}
}

void List::display() {
	Node *tempPtr = head;

	while (tempPtr != NULL) {
		cout << "Movie Id: " << tempPtr->movie.getMovieId() << "\nMovie Title: " << tempPtr->movie.getMovieTitle() << "\n";
		tempPtr = tempPtr->next;
	}
}

List& List::operator=(const List& newList) {
	if (this != &newList) {
		while (head != NULL) {
			deleteLast();
			head = head->next;
		}

		Node *tempPtr = newList.head;
		while (tempPtr != NULL) {
			add(tempPtr->movie.getMovieId(), tempPtr->movie.getMovieTitle());
			tempPtr = tempPtr->next;
		}
	}
	return(*this);
}