#include <iostream>
using namespace std;
int main()
{
	int num, i=1, r, q, bin =0;
	cout<<"Enter number ";
	cin>> num;
	while (num>0)
	{
	
	r= num%2;
	num=num/2;
	bin = bin + r*i;
	i*=10;
}
	cout<< "Binary value is "<< bin;
	
	
	
	
	return 0;
}
