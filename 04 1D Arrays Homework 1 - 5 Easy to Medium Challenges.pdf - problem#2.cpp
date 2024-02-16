/*Problem #2: Replace MinMax
● Read a positive integer N (< 200), then read N integers 
○ Assume all values are in the range [0, 2000]
● Print the array after doing the following operations:
○ Find the minimum number among these numbers
○ Find the maximum number among these numbers
○ Replace each minimum number with the maximum number, and vice versa
● Example input ⇒ output
○ 7 4 1 3 10 8 10 10 ⇒ 4 10 3 1 8 1 1*/
#include <iostream>
using namespace std;
int main()
{
	const int i = 200;
	int N, arr[i], max, min;
	cout << "Enter positive integer : ";
	cin >> N;
	cout << "Enter " << N << " Numbers : \n";
	for (int i = 0; i < N; i++) 
	{
		cout << "arr[" << i << "]: ";
		cin >> arr[i];
	}
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < N; i++) 
	{
		if (arr[i] > max) 
		{
			max = arr[i];
		}
		if (arr[i] < min) 
		{
			min = arr[i];
		}
	}
	cout << "The array after replacing each minimum number with the maximum number, and vice versa : ";
	for (int i = 0; i < N; i++) 
	{
		if (arr[i] == max) 
		{
			arr[i] = min;
			cout << " " << arr[i];
		}
		else if (arr[i] == min) 
		{
			arr[i] = max;
			cout << " " << arr[i];
		}
		else 
		{
			cout << " " << arr[i];
		}
	}
	cout << "\n\n\n";
}

