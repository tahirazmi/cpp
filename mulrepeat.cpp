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

void no_freq( int arr[], int a , int key[] , int pair[] )
{
	int t=1, i, j=0, value=0;
	for ( i=0; i<a -1 ; i++)
	{
		if (arr[i]==arr[i+1])
		{
			t++;
		
			
			
		}
		else{
			cout<<arr[i] << " nof of time "
			 t = 1 ; 
		}			
} 
  if(arr[i]==arr[i-1]){
  	key[j] = arr[i];
			 pair[j]  = t  ; 
			 j++ ; 
			 t = 1 ; 
  }else{
  	
  }

cout  << endl<< value<< "           "<< t<< endl;		
	
}

int main()
{
	
	int  i,j, n;
	
	cout<< " Enter number of element in array ";
	cin>> n;
	int arr[n];
	cout << " Enter element of array "<< endl;
	for (i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	 for(int i = 0 ; i < n ; i++ ){
    	int mx = max(arr , n-i) ; 
    	swap ( arr , mx , n-i-1) ; 
	}
	int key[n] , pair[n] ; 
	no_freq(arr, n  , key , pair);
	
	return 0;
}
