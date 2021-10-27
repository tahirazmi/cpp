#include <iostream>
using namespace std;

int main() 
{
	int n, r, sum , temp;
	
cout<< "Enter a number ";
cin>> n;
temp = n;
sum = 0;
while (n>0)
{
	r= n%10;
	n= n/10;
	sum = sum + r;
}
cout << "the sum of number is " << sum <<endl;
	
	
	
	
	
	
	return 0;
}
