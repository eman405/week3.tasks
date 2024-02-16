/*Problem #3: Unique Numbers of an Ordered List 
● Read in a positive integer N ( < 1000), followed by N integers (0 <= value <= 
500)
● The N number input must be ordered from small to large
● Print the unique list of the numbers, but preserve their given order
● Input: 12 1 1 2 2 2 5 6 6 7 8 9 9
● Output: 1 2 5 6 7 8 9
○ Observe: the input remains a sorted list
● Optional Constraints:
○ Don’t use nested loops! 
○ Only use 1 array
○ Or, try doing it without any arrays at all
*/

#include <iostream>
using namespace std;
int main()
{
	const int i = 999;
	int N, arr[i];
	cout << "Enter positive number < 1000 : ";
	cin >> N;
	cout << "Enter " << N << " numbers ordered from small to large : \n";
	for (int i = 0; i < N; i++) 
	{
		cout << "arr[" << i << "]:";
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++) 
	{
		if (arr[i] != arr[i - 1])
			cout << arr[i] << " ";
	}
	cout << "\n\n\n";
}
