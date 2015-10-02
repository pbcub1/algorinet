

namespace Sort {
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
}