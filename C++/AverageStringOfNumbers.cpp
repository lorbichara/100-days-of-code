// Average of a stream of numbers
// https://www.geeksforgeeks.org/average-of-a-stream-of-numbers/

#include <iostream>
using namespace std;

void streamAvg(double arr[], int n)
{
	double avg;
	double prev_avg;
	int count = 1;
	double sum = arr[0];

	for(int i = 1; i <= n; i++) {
		avg = sum / count;
		cout << "Average of " << count << " numbers is " << avg << endl;
		sum += arr[i];
		count++;
	}
   
}
 
// Driver program to test above functions
int main()
{
	double arr[] = { 10, 20, 30, 40, 50, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);
    streamAvg(arr, n);
}
