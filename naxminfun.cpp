#include <iostream>
using namespace std;

int max(int arr[])
{
int temp, i;
temp = arr[0];
for (i=1; i<10; i++)
{
	if(temp<arr[i])
	{
		temp = arr[i];
	}
	
}

return temp;
}

int min(int arr[])
{
int temp, i;
temp = arr[0];
for (i=1; i<10; i++)
{
	if(temp>arr[i])
	{
		temp = arr[i];
	}
	
}

return temp;
}


int main()
{
	int i, temp;
int arr[10];
cout<< " Enter element of array "<<endl;

for (i=0; i<10; i++)
{
	
	cin>>arr[i];
}

cout<<"Maximum number in array is " <<  max(arr) << endl;	
cout<<"Minimum number in array is " <<  min(arr);

	return 0;
}

