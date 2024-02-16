/*Problem #1: Is the Array Increasing?
● Read in a positive integer N, then read N (<= 200) integers. 
● Print YES if the array is increasing
○ An array is increasing if every element is >= the previous number
● Inputs 
○ 4 1 2 2 5 ⇒ YES
○ 5 1 0 7 8 9 ⇒ NO [0 is < 1, the previous number]
○ 2 -10 10 ⇒ YES 
*/
#include <iostream>
using namespace std;
int main()
{
	const int i = 200;
	int N, arr[i];
	cout << "Enter a positive integer : ";
	cin >> N;
	cout << "Enter " << N << " numbers : \n";
	bool ISincreasing = true;
	for (int i = 0; i < N; i++) 
	{
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
		if (arr[i]<arr[i-1])
		{
			ISincreasing = false;
		}
	}
	if (ISincreasing==true) 
	{
		cout << "This array is increasing.\n\n\n";
	}
	else 
	{
		cout << "This array is not increasing.\n\n\n";
	}
}

