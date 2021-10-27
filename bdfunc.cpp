#include <iostream>
#include <math.h>
using namespace std;

int decimal(int num)
{

int i, r;

i=0;
int dec =0;
while(num>0)
{
	r=num%10;
	num/=10;
	dec = dec + r*pow(2,i);
	i++;
}


return dec;
}

int binary(int num )

{
   int bnum = 0;
   int i = 1, rem;


   while (num != 0)
   {
      rem = num % 2;
      num /= 2;
      bnum += rem * i;
      i= i*10;
   }

   return bnum;
}


int main()
{

int base, num;
cout<<"Enter base of the number you have to find ";
cin>> base;

if (base == 2)
{
	cout<< " Enter Deicmal number number  ";
	cin>> num;
	cout<<endl<< "Binary number is " << binary(num);
}
else if (base == 10)
{
	cout<< "Enter Binary Number number  ";
	cin>>num;
	cout<<endl<< "Decimal Number is  "<< decimal(num);
	
}
else {
	cout<< " Invalid Base ";
	return 0;
}


return 0;
}
