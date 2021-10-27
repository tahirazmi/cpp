// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to print the good permutation
// of first N natural numbers
int printPermutation(int n)
{
	// If n is odd
	if (n % 2 != 0)
		cout << -1;

	// Otherwise
	else
		for (int i = 1; i <= n / 2; i++)
			cout << 2 * i << " " << 2 * i - 1 << " ";
}

// Driver code
int main()
{
	int n = 5;
	printPermutation(n);

	return 0;
}

