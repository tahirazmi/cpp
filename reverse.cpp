#include <iostream>
using namespace std;

int main() 
{
	int n, r, rev , temp;
	
cout<< "Enter a number ";
cin>> n;
temp = n;
rev = 0;
while (n>0)
{
	r= n%10;
	n= n/10;
	rev = rev*10 + r;
	int test = rev;
	cout<<"test reult "<<test<<endl;
}
cout << "the reverse number is " << rev <<endl;
	
	if (temp==rev)
	{
		cout<< "number is palindrome "<<endl;
	}
	else
	{
		cout<< "number is not pallindrome";
	}
	
	
	
	
	
	return 0;
}
