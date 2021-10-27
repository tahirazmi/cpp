// #include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std ; 
void swap(int arr[] , int i , int j ){
	int temp = arr[i] ; 
	arr[i] = arr[j] ; 
	arr[j] = temp ; 
	}
int main(){
	int n ; 
	cout<<" Enter the no of element "<<endl ; 
	cin>>n; 
    int arr[n] ; 
	cout<<" Enter element of array "<<endl;	
    for(int i = 0 ; i < n ; i++){
    	cin>>arr[i] ; 
	}
	// logic 
	for(int i = 0 ; i < n ; i++){
		for(int j =0 ;  j< n-1 ; j++){
			 
			
			string no =  to_string(arr[j]) + to_string(arr[j+1]) ; 
		    string no1 =  to_string(arr[j+1]) + to_string(arr[j]) ; 
			if(no.compare(no1) < 0  ) {
				swap(arr , j , j+ 1 ) ; 
			}
		}
	}
		
	for(int i = 0 ; i <n ;i++){
		cout<<arr[i] ; 
	}	
	return 0 ; 
}
