#include <iostream>
using namespace std;

int main() 
{
int amt;
cout<<"Enter the amount ";
cin>> amt;
if (amt>2000)
{
int	q = amt/2000;
	cout<< "number of 2000 note is " << q<<endl;
	amt= amt-q*2000;

}

if (amt>1000)
{
int	q = amt/1000;
	cout<< "number of 1000 note is " << q <<endl;
	amt= amt-q*1000;

}

if (amt>500)
{
int	q = amt/500;
	cout<< "number of 500 note is " << q<<endl;
	amt= amt-q*500;

}

if (amt>100)
{
int	q = amt/100;
	cout<< "number of 100 note is " << q<<endl;
	amt= amt-q*100;

}

if (amt>2000)
{
int	q = amt/2000;
	cout<< "number of 2000 note is " << q;
	amt= amt-q*2000;

}

if (amt>50)
{
int	q = amt/50;
	cout<< "number of 50 note is " << q<<endl;
	amt= amt-q*50;

}

if (amt>10)
{
int	q = amt/10;
	cout<< "number of 10 note is " << q<<endl;
	amt= amt-q*10;

}

if (amt>1)
{
int	q = amt/1;
	cout<< "number of 1 note is " << q<<endl;
	

}


	
	
	
	
	
	
	
	
	return 0;

}
