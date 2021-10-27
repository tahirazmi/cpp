#include<iostream>
#include<string>
using namespace std;
void swap(int arr[] , int i , int j ){
	int temp = arr[i] ; 
	arr[i] = arr[j] ; 
	arr[j] = temp ; 
	}


int main()
{
	int i, j, n;
	cout<< "Enter number of elements in array ";
	cin>> n;
	int arr[n];
	cout<< " Enter element of array"<< endl;
	for (i=0; i<n; i++)
	{
		cin>> arr[i];
	}
	for (i=0; i<n; i++){
	
	for (j=0; j<n-1; j++)
	{
		string st1 = to_string(arr[j])+ to_string(arr[j+1]);
		string st2 = to_string(arr[j+1]) + to_string(arr[j]);
		if ( st1.compare(st2)<0){
			swap(arr, j, j+1);
		}
		
	}
}
for (i=0; i<n; i++)
{cout<<arr[i];
}
	
	return 0;
	
}
