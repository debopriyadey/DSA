// C++ Program for finding out majority element in an array 
//  A majority element in an array A[] of size n is an element that appears more than n/2 times 
// Moore’s Voting Algorithm
#include <bits/stdc++.h>
using namespace std;

/* Function to find the candidate for Majority */
int findCandidate(int a[], int size)
{
	int maj_index = 0, count = 1;
	for (int i = 1; i < size; i++) {
		if (a[maj_index] == a[i])
			count++;
		else
			count--;
		if (count == 0) {
			maj_index = i;
			count = 1;
		}
	}
	return a[maj_index];
}

/* Function to check if the candidate
occurs more than n/2 times */
bool isMajority(int a[], int size, int cand)
{
	int count = 0;
	for (int i = 0; i < size; i++)

		if (a[i] == cand)
			count++;

	if (count > size / 2)
		return 1;

	else
		return 0;
}

/* Driver code */
int main()
{
	int a[] = { 1, 4, 1, 2, 1 , 2, 1};
	int size = (sizeof(a)) / sizeof(a[0]);

	int cand = findCandidate(a, size);

	/* Print the candidate if it is Majority*/
	if (isMajority(a, size, cand))
		cout << " " << cand << " ";

	else
		cout << "No Majority Element";

	return 0;
}
