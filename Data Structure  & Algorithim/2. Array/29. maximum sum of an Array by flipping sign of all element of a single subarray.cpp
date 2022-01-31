// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum sum
// after flipping a subarray
int maxSumFlip(int a[], int n)
{

	// Stores the total sum of array
	int total_sum = 0;
	for (int i = 0; i < n; i++)
		total_sum += a[i];

	// Initialize the maximum sum
	int max_sum = INT_MIN;

	// Iterate over all possible subarrays
	for (int i = 0; i < n; i++)
	{
		// Initialize sum of the subarray
		// before flipping sign
		int sum = 0;

		// Initialize sum of subarray
		// after flipping sign
		//int flip_sum = 0;

		for (int j = i; j < n; j++)
		{
			// Calculate the sum of
			// original subarray
			sum += a[j];

			// Subtract the original
			// subarray sum and add
			// the flipped subarray
			// sum to the total sum
			max_sum = max(max_sum, total_sum - 2 * sum);
		}
	}

	// Return the max_sum
	return max(max_sum, total_sum);
}

// Driver Code
int main()
{
	int arr[] = { 1, 2, -10, 2, -20 };
	int N = sizeof(arr) / sizeof(int);

	cout << maxSumFlip(arr, N);
}

// This code is contributed by sanjoy_62
