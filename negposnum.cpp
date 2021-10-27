#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int arr[6] = { -4, 5, 3, 5 ,-6, -7};
//	for(int i = 0 ; i < 6 ; i++){
//		cin>>arr[i]; 
//	} 
	int i=0  , j = 5, temp ; 
	while(i<=j){
		if(arr[i]< 0){
			i++ ; 
		}
		if (arr[j] > 0 ){
			j--;
		}
	
		else if(arr[i] >0 && arr[j] < 0 ){
			temp = arr[i] ; 
			arr[i] = arr[j] ; 
			arr[j] = temp ; 
			i++ ; j-- ; 
		}
		
		
	}
	for(int i = 0 ; i < 6 ; i++){
		cout<<arr[i]<<"  "; 
	} 
	
	
	return 0;
}
