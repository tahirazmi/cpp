#include <iostream>
using namespace std;
void findRepeat(int arr[],int a){
   int count=1; //count of repeated element
   int value=0; //to store repeated element
   for(int i=0;i<a;i++){
      if(arr[i]==arr[i+1]){
         count++;
         value=arr[i];
      }
   }
    //for last element
   cout<<"Repeated Element: "<<value;
   cout<<endl<<"Number of occurrences: "<<count;
   
}
int main()
{
	
	int a, i,j, n, t;
	
	cout<< " Enter number of element in array ";
	cin>> n;
	cout << " Enter element of array "<< endl;
	int arr[n];
	for (i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	findRepeat(arr, n);
	
	return 0;
}
