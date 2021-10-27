#include <iostream>
using namespace std;
int main()
{

int n,i, fact=1;
cout<<"Enter a number ";
cin>> n;

if (n<0)
{
	cout<< "factorial not possible";
	return 0;
}
for (i=1; i<=n; i++)
{

	
	fact *= i;
	
	

}

cout<< "factorial is " << fact;



return 0;

}
