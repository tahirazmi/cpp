#include <iostream>
using namespace std;
int main()
{

int n, sum_o, sum_e, i ;
sum_e = 0;
sum_o = 0;
cout<<"Enter the value of n ";
cin>>n;
for(i=1; i<=n; i++)
{

	if(i%2==0)
	{
	
	sum_e = sum_e + i;
	
}
else
{
	sum_o = sum_o + i;
}
}
cout<<"sum of even number = "<<sum_e<<endl;
cout<<"sum of odd numbers = "<<sum_o;



return 0;
}
