#include "List.h"
#include <iostream>
using namespace std;

int main() {
	List myList;
	myList.add(1, "Movie 1");
	myList.add(2, "Movie 2");
	myList.add(3, "Movie 3");
	List myList2;
	myList2 = myList;
	myList.deleteLast();
	myList.deleteTitle("Movie 1");

	myList.display();
	cout << "\nList 2\n";
	myList2.display();
	
	cout << "\nList 3\n";
	myList2.add(4, "Movie 4");
	List myList3 = List(myList2);
	myList3.add(5, "Movie 5");
	myList3.deleteTitle("Movie 1");
	myList3.display();

	system("pause");
	return(0);
}