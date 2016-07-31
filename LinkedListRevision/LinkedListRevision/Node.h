#pragma once

#include "Movies.h"
using namespace std;

class Node {
	friend class List;
private:
	Node* next;
	Movies movie;

public:
	Node();
	Node(int, string);
};
