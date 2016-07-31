#pragma once
#include <string>
#include "Node.h"
using namespace std;
class List {
public:
	Node * head;
private:
	List();
	List(Node&);
	void Add(int, string);
	void Delete();
	void display();
};
