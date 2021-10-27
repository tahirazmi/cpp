#include <iostream>
using namespace std;
void swap(int arr[] , int i , int j  ){
	int temp = arr[i] ; 
     arr[i] = arr[j] ;
	 arr[j] = temp ; 	
}
int max(int arr[], int a  ){
	int m = 0 ,  t = arr[0]; 
	for(int i = 1 ; i <a ; i++){
		if(t < arr[i]){
			m = i ; 
			t = arr[i ] ; 
		}
	}
	return m ; 
}

int main()
{
	int i, j, n, temp;
	cout<< " Enter number of element in array ";
	cin>> n;
	int arr[n];
	cout<< "Enter elements of arry "<< endl;
	for (i=0; i<n; i++)
	{cin>> arr[i];
	}
	
    for(int i = 0 ; i < n ; i++ ){
    	int mx = max(arr , n-i) ; 
    	swap ( arr , mx , n-i-1) ; 
	}	
    for(int i = 0 ; i < n ; i++ ){ 
    cout<<arr[i]<< "    ";
	}
	return 0;
}

