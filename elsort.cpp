#include <iostream>
using namespace std;
int main()
{
	int i, j,x, n, temp;
	cout<< " Enter number of element in array ";
	cin>> n;
	int arr[n];
	cout<< "Enter elements of arry "<< endl;
	for (i=0; i<n; i++)
	{cin>> arr[i];
	}
	
	
	for (i=0; i<n; i++)
	
     {
     	temp = arr[0];
     	
     	for (j=1; j<n-i; j++)
     	{
		 
        if (temp < arr[j])
	         { temp = arr[j];
	         x=j;
			 } 
		}
	//	int t= arr[x];
	arr[x]= arr[n-1-i];
    arr[n-1-i]= temp;
}
	    
	
	
	for (i=0; i<n; i++)
	{cout<< arr[i]<< "  ";
	}
	
	
	return 0;
}
