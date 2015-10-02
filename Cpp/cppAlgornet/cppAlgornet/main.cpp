#include <iostream>
//Figure out why includes not working.

int * algornetBubbleSort(int *);

int main(int argc, char* argv[]) {
	using namespace std;

	//Bubble Sort Algorithm test
	{
		cout << "************ START BUBBLE SORT *********" << endl << endl;

		int list[] = {
			32, 41, 1, 5, 2, 63, 23, 25, 16
		};

		int *sortedList = algornetBubbleSort( list );
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

int * algornetBubbleSort(int * list) {
	int n = sizeof(list);

	bool swapped = true;
	while (swapped) {
		swapped = false;
		for (int i = 1; i <= n - 1;) {
			if (list[i - 1] > list[i]) {
				int temp = list[i];
				list[i] = list[i - 1];
				list[i - 1] = temp;

				swapped = true;
			}
		}
	}

	return list;
}
