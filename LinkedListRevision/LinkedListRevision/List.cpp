#include "List.h"
#include <iostream>

List::List() {
	head = NULL;
}

void List::add(int id, string title) {
	Node *newNode = new Node(id, title);

	if (head == NULL) {
		head = newNode;
	}
	else {
		Node *tempPtr = NULL;

		for (tempPtr = head; tempPtr->next; tempPtr = tempPtr->next) {
			tempPtr->next = newNode;
		}
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

void List::display() {
	Node *tempPtr = head;

	while (tempPtr != NULL) {
		cout << "Movie Id: " << tempPtr->movie.getMovieId() << "\nMovie Title: " << tempPtr->movie.getMovieTitle() << "\n";
		tempPtr = tempPtr->next;
	}
}