#pragma once

#include <string>
#include "Node.h"
using namespace std;

class List {
private:
	Node *head;

public:
	List();
	List(Node&);
	void add(int, string);
	void deleteLast();
	void display();
};
