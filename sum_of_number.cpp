#include <iostream>  
using namespace std;  
int main()  
{  
int i, sum=0, n, rem;
cout <<"Enter number ";
cin>> n;
while(n!=0)
{
	rem=n%10;
	n/=10;
	sum+=rem;
	
}
cout<< "the sum of number is "<< sum;
return 0;  
}  
