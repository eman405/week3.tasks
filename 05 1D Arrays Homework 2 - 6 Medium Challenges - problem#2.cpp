/* Problem #2: Search for a Number
● Read in a non-negative N, then read N <= 200 integers [0 <= A[i] <= 500].
○ We will search in this array for numbers
● Then, read integer Q (for a number of queries), and read Q integers
○ For each integer, find the last occurrence of it within the array, and print out this index
○ If the doesn’t exist within the array, print out -1 instead
● Input 5 1 2 7 3 7 3 7 9 2
○ Means an array of 5 numbers (1 2 7 3 7) and 3 queries (7 9 2)
● Output
○ 4 [7 exists in 2 positions (2 and 4). The last occurrence is 4]
○ -1 [9 doesn’t exist within the array]
○ 1 [2 exists only in position 1] 
● Do it first with nested loops. Can you do it without using nested loops? */
#include <iostream>
using namespace std;
int main()
{
    int N, last_occurance = -1, positions = 0;
    const int n = 200;
    int arr[n];
    cout << "Enter any positive number : ";
    cin >> N;
    cout << "Enter " << N << " numbers provided that each number is < 500 : "; 
    for (int i = 0; i < N; i++) 
    {
        cin >> arr[i];
    }
    int Q, arr1[n];
    cout << "Enter number of queries: ";
    cin >> Q;
    cout << "Enter " << Q << " integers: ";
    for (int i = 0; i < Q; i++) 
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < Q; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            if (arr1[i] == arr[j]) 
            {
                positions += 1;
                last_occurance = j;
            }
            else 
            {
                int positions_ = positions;
                int last_occurance_ = last_occurance;
            }
        }
        cout << "The element " << arr1[i] << " exists in " << positions << " positions and its last occurance is in position : " << last_occurance << "\n";
        positions = 0;
        last_occurance = -1;
    }
    cout << "\n\n\n";
}

