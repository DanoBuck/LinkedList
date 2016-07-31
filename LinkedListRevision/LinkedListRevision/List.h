#pragma once

#include <string>
#include "Node.h"
using namespace std;

class List {
private:
	Node * head;

public:
	List();
	List(Node&);
	void Add(int, string);
	void Delete();
	void display();
};
