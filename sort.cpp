// Bubble Sorting
#include <iostream>
using namespace std;
void swap(int arr[], int j ){
	int temp ; 
	temp=arr[j];
    		   arr[j]=arr[j+1];
    		   arr[j+1]=temp;
}
int main ()
{
	int i, j,n, temp;
   
    cout << "Enter the length of array "<<endl;
    cin>> n;
     int arr[n];
    cout << " Enter Element of array "<< endl;
    for (i=0; i<n; i++){
	
    cin>> arr[i];
}
	for (i=0; i<n; i++)
    {
   
    	for (j=0; j<n-1-i; j++)
    	{
    		if (arr[j] < arr[j+1])
    	    {
    		   swap(arr , j  ) ; 
    		   
        	}
		}
    	
	}
	for (i=0; i<n; i++)
	{
		cout<< arr[i]<< "   ";
	}
 
	
	
	
	return 0;
}
