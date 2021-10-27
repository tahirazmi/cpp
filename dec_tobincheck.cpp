#include <iostream>
using namespace std;
int main()
{

int i, j, num;
cout<< "enter number to convert ";
cin>> num;
int arr[10];
for (i =0; num>0; i++){
	arr[i]=num%2;
	num/=2;
}
for (i=i-1; i>=0; i--)
{
	cout << arr[i];
}

return 0;
}
