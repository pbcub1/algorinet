#include <iostream>
#include "sort.h"
//Figure out why includes not working.

int main(int argc, char* argv[]) {
	using namespace std;

	//Bubble Sort Algorithm test
	{
		cout << "************ START BUBBLE SORT *********" << endl << endl;

		int list[] = {
			32, 41, 1, 5, 2, 63, 23, 25, 16
		};

		int *sortedList = Sort::algornetBubbleSort( list );
		int n = sizeof(list);

		for (int i = 0; i < n;) {
			cout << list[i] << " ";
		}

		cout << endl;

		for (int i = 0; i < n;) {
			cout << sortedList[i] << " ";
		}
		
		cout << endl << endl;

		cout << "************ END BUBBLE SORT *********" << endl << endl;
	}
	//End bubble sort
}