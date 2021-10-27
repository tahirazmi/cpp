#include <iostream>
using namespace std;
int main()
{

int i,j, n, a;
cout << "Enter length of array "<<endl;
cin>> a;
int arr[a];
int arr2[3];
cout << "Enter value of number in array "<<endl;
for (i=0; i<a; i++)
{
cin>> arr[i];
}
arr[a-1] = arr[a-1]+1;
for (i=a-1; i>=0; i--)
{
	if (arr[i]==10&& i!=0)
	{ arr[i-1]+=1;
	arr[i]=0;
	
	}
}

for (i=0; i<a; i++)
{
cout<< arr[i]<< endl;
	
}


return 0;
}


