#include <string>
#include "Node.h"
using namespace std;

class List {
private:
	Node *head;

public:
	List();
	void add(int, string);
	void deleteLast();
	void display();
};
