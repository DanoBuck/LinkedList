#include <string>
#include "Node.h"
using namespace std;

class List {
private:
	Node *head;

public:
	List();
	List(const List&);
	~List();
	void add(int, string);
	void deleteLast();
	void deleteTitle(string);
	void display();
	List& operator=(const List&);
};
