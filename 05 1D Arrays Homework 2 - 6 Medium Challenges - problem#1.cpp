/* Problem #1: Find the Three Minimum Values
● Read a non-negative integer n(>= 3), then read in n integers. Find the 3 
smallest numbers
○ Don't change the array content
○ Don't iterate on the array more than once
○ Make sure they’re printed out in order, from smallest to largest
● Input ⇒ Output
○ 5 4 1 3 10 8 ⇒ 1 3 4
○ 3 7 9 -2 ⇒ -2 7 9 */
#include <iostream>
using namespace std;
int main()
{
	int N, min1 = INT_MAX, min2 = INT_MAX, min3 = INT_MAX;
	cout << "Enter a positive number : ";
	cin >> N;
	int* arr = new int[N];
	int min = INT_MAX;
	cout << "Enter " << N << " numbers : \n";
	for (int i = 0; i < N; i++)
	{
		cout << "arr[" << i << "]: ";
		cin >> arr[i];
		if (arr[i] < min1) 
		{
			min3 = min2;
			min2 = min1;
			min1 = arr[i];
		}
		else if (arr[i] < min2)
		{
			min3 = min2;
			min2 = arr[i];
		}
		else if (arr[i] < min3)
		{
			min3 = arr[i];
		}
	}
	cout << " " << min1 << " " << min2 << " " << min3;
}
