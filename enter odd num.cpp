#include <iostream>
using namespace std;
int main()
{

int sum_o, sum_e, i;
 int n , a ;
   cout<<"Enter the numbers in array\n";
    cin>>a ; 

sum_e = 0;
sum_o = 0;

for(i=0; i<a; i++)
{
      cin>>n;
	if(n%2==0)
	{
	
	sum_e = sum_e + n;
	
}
else
{
	sum_o = sum_o + n;
}
}
cout<<"sum of even number = "<<sum_e<<endl;
cout<<"sum of odd numbers = "<<sum_o;



return 0;
}
