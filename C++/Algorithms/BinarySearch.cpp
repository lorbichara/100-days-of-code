#include <iostream>
using namespace std;

//Binary search implementation in an array
int binarySearch(int arr[], int x, int l, int r) {
	if(r >= l) {
		int middle = 1 + (r - l) / 2;

		if(x == arr[middle])
			return middle;
		else if(x > arr[middle])
			return binarySearch(arr, x, middle+1, r);
		else
			return binarySearch(arr, x, l, middle-1);
	}
	return -1;
}

//Function to test Binary Search in an array with numbers > 0.
int main() {
	int arr[6] = {1, 2, 8, 21, 42, 50};
	int x = 8;
	int n = sizeof(arr)/ sizeof(arr[0]);

	if(binarySearch(arr, x, 0, n) == -1)
		cout << "The number doesn't exist in the array." << endl;
	else
		cout << "The number exists in position " << binarySearch(arr, x, 0, n) << endl;
}