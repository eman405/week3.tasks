/* Problem #4: Is it a Palindrome?
● Read in a positive integer N (< 1000), then read N integers of an array
● Determine if the array is a palindrome or not, printing out “YES” or “NO”
● An array can be called a palindrome if it reads the same backwards and 
forwards
○ For example, the arrays { 1 } and { 1,2,3,2,1 } are palindromes
○ Conversely, the arrays { 1,12 } and { 4,7,5,4 } are not palindromes
● Inputs ⇒ Outputs 
○ 5 1 3 2 3 1 ⇒ YES
○ 4 1 2 3 4 ⇒ NO */
#include <iostream>
using namespace std;
int main()
{
	int N, arr[999];
	cout << "Enter a positive number : ";
	cin >> N;
	cout << "Enter " << N << " numbers : \n";
	for (int i = 0; i < N; i++) 
	{
		cout << "arr[" << i << "]: ";
		cin >> arr[i];
	}
	bool palindrome = true;
	for (int i = 0; i < N; i++) 
	{
		if (arr[i] != arr[N - 1 - i]) 
		{
			palindrome = false;
		}
	}
	cout << "Probability of array palindrome is : " << palindrome << "\n\n\n";
}

