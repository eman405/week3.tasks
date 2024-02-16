/* Problem #5: Smallest Pair
● Read in a positive integer N (<= 200), then read N integers of an array
● Print the smallest possible result of A[i] + A[j] + j - i, where i < j
● Example input ⇒ output
○ 4 20 1 9 4 ⇒ 7
● This is a tricky problem from testing perspective */
#include <iostream>
using namespace std;
int main()
{
    const int i=200;
	int N, arr[i];
	cout << "Enter a positive number: ";
	cin >> N;
	cout << "Enter array elements : \n";
	for (int i = 0; i < N; i++) 
	{
		cout << "arr[" << i << "]: ";
		cin >> arr[i];
	}
	int MIN_sum ;
	bool a = true;
	for (int i = 0; i < N; i++) 
	{
		for (int j = i + 1; i < N; i++) 
		{
			int sum = arr[i] + arr[j] + j - i;
			if (a||sum < MIN_sum) 
			{
				MIN_sum = sum;
				a = false;
			}
		}
	}
	cout << MIN_sum << "\n\n\n";

}