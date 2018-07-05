#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void merge(int arr[], int l, int m, int r) {
	int temp[10];
	int i = l;
	int j = m + 1;
	int k = 0;

	while(i <= m && j <= r) {
		if(arr[i] <= arr[j])
			temp[k++] = arr[i++];
		else
			temp[k++] = arr[j++];
	}

	while(i <= m)
		temp[k++] = arr[i++];

	while(j <= r)
		temp[k++] = arr[j++];

	for(int k = 0, i = l; i <= r; ++i, ++k) {
		arr[i] = temp[k];
	}
}

void mergeSort(int arr[], int l, int r) {

	if(l < r) {
		int middle = (l + r) / 2;
		mergeSort(arr, l, middle); //mergeSort on left half
		mergeSort(arr, middle+1, r); //mergeSort on right half
		merge(arr, l, middle, r);
	}
}

int main() {
	int iArr[] = {9, 1, 4, 6, 7, 8, 2, 0, 3, 5};

	int n = sizeof(iArr)/sizeof(iArr[0]);

	printArray(iArr, n);
	mergeSort(iArr, 0, n);
	printArray(iArr, n);
}