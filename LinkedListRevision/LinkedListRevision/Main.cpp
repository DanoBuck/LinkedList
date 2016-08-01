#include "List.h"
using namespace std;

int main() {
	List myList;
	myList.add(1, "Movie 1");
	myList.add(2, "Movie 2");
	myList.add(3, "Movie 3");
	myList.deleteLast();
	myList.deleteTitle("Movie 1");
		
	myList.display();

	system("pause");
	return(0);
}