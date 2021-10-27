#include <iostream>
#include <cmath>
using namespace std;

int main()
int a, b, c, x1, x2  , det, t;
{
	cout << " Enter value of a ";
cin>> a;
cout << " Enter value of b ";
cin>> b;
cout << " Enter value of c ";
cin>> c;

det = b*b - 4*a*c;
if (det>0)
{
	x1=  (-b + sqrt(det))/ (2*a);
	x2=   (-b - sqrt(det))/ (2*a);
	cout<< "squarre root of equation is "<< x1<<" and " << x2;
	 
}
	if (det==0)
	{
	}
	return 0;
}
