// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the nearest power of
// 2 for all frequencies in the Map freq
void nearestPowerOfTwoUtil(
	unordered_map<char, int>& freq)
{
	// Traverse the Map
	for (auto& it : freq) {

		cout << it.first << " -> ";

		// Calculate log of the
		// current array element
		int lg = log2(it.second);
		int a = pow(2, lg);
		int b = pow(2, lg + 1);

		// Find the nearest power of 2
		// for the current frequency
		if ((it.second - a)
			< (b - it.second)) {
			cout << a << endl;
		}
		else {
			cout << b << endl;
		}
	}
}

// Function to find nearest power of 2
// for frequency of each digit of num
void nearestPowerOfTwo(string& S)
{
	// Length of string
	int N = S.size();

	// Stores the frequency of each
	// character in the string
	unordered_map<char, int> freq;

	// Traverse the string S
	for (int i = 0; i < N; i++) {
		freq[S[i]]++;
	}

	// Function call to generate
	// nearest power of 2 for each
	// frequency
	nearestPowerOfTwoUtil(freq);
}

// Driver Code
int main()
{
	string N = "16333331163";
	nearestPowerOfTwo(N);

	return 0;
}

