#pragma once

#include "Movies.h"
using namespace std;

class Node {
	friend class List;
public:
	Node* next;
	Movies movie;

private:
	Node();
	Node(int, string);
};
