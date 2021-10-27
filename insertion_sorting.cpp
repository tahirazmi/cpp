#include<iostream>
using namespace std;
void swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i]=arr[j];
	arr[j]=temp; 
}
void sort(int arr[], int a)
{

for (int j=a; j>0; j--)
{
	if (arr[j]>arr[j-1])
	{
		swap(arr, j, j-1);
	}
}
}

int main()
{
	int n;
cout << "Enter number of element ";
cin>> n;
int arr[n];
cout<< "Enter value of element ";
for(int i=0; i<n; i++){

cin>> arr[i];
sort(arr, i);
}

for (int i=0; i<n; i++)
{
	cout<< arr[i]<< "   ";
}
return 0;	
}
