#include <iostream>
using namespace std;
int main()
{

int i,j, n;
int arr[7];
cout << "Enter value of number in array "<<endl;
for (i=0; i<7; i++)
{
cin>> arr[i];
}
n = arr[0];
for (i=1; i<7; i++)
{
 n= n^arr[i];
}
	
cout<< " Result is "<< n;

return 0;
}
