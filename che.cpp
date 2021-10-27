#include <iostream>
using namespace std;
void swap(int arr[] , int i , int j  ){
	int temp = arr[i] ; 
     arr[i] = arr[j] ;
	 arr[j] = temp ; 

} 
void sortt(int arr [] ,  int a ){
	 for(int j = a ; j >0 ; j-- ){ 
	   if(arr[j] <arr[j-1] )
	   {
	   	swap(arr , j , j-1) ; 
	   }
	 }
}

int main()
{
	int i,j, x, n, t, temp;
	cout<< " Enter number of element in array ";
	cin>> n;
	int arr[n];
	cout<< "Enter elements of arry "<< endl;
    cin>>arr[0] ; 
    for(int i =1 ; i < n ; i++ ){
    	cin>>arr[i] ; 
    	sortt(arr , i ) ; 
    
    	
	}
   for(int i =0 ; i < n ; i++ ){
    	cout<<arr[i]<<"    " ;     	
	}	
return 0 ; 	
} 

