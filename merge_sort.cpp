#include<iostream>
using namespace std;
void  merge(int arr1[] , int arr2[ ] , int arr[] , int n1 , int n2){ 
	int  i = 0 ;int  j= 0 , k=0 ; 
	while(i < n1 &&  j < n2 ){
		if(arr1[i] <= arr2[j]){
			arr[k] = arr1[i] ; 
			k++ ; 
			i++ ; 
		}else{
			arr[k] = arr2[j] ; 
			j++ ; 
			k++ ; 
		}
	}
	
	while(i < n1){
		
		arr[k] = arr1[i] ;
		i++ ; 
		k++ ; 
	}
	
	while(j < n2){
		arr[k] = arr2[j] ;
		j++ ; 
		k++ ; 
	}
	
		
}
int main(){
	int n1 = 3 ,  n2 = 3  ; 
	int arr1[] = {1 , 4 ,5  } ; 
	int arr2[] = {2 , 3 ,7 } ;
	
	int  arr[n1+n2] ; 
	merge(arr1 , arr2 , arr  , n1 , n2) ;  
	for(int i = 0 ; i < n1  + n2 ; i++ ){	
		cout<<arr[i]<<"     "; 
	}
	
	
	return 0 ; 
}
