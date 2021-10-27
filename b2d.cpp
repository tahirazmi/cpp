#include <iostream>
#include <cmath>
using namespace std;

int main()
{

int bin, dec, i, r;
cout<<"Enter binary number ";
cin>> bin;
i=0;
dec=0;
while(bin>0)
{
	r=bin%10;
	bin/=10;
	dec = dec + r*pow(2,i);
	i++;
}

cout<<"decimal number is "<< dec;
return 0;
}
