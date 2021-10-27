#include <iostream>
using namespace std;
using namespace std;
void findRepeat(int arr[],int n){
   int count=0; //count of repeated element
   int value=0; //to store repeated element
   for(int i=0;i<n;i++){
      if(arr[i]==arr[i+1]){
         count++;
         value=arr[i];
      }
   }
   
}


int main()
{
	int i, j, t=1, n, v, temp;
	cout<< " Enter number of element in array ";
	cin>> n;
	int arr[n];
	cout<< "Enter elements of arry "<< endl;
	for (i=0; i<n; i++)
	{cin>> arr[i];
	} 

 findRepeat(arr, n);
 count++; //for last element
   cout<<"Repeated Element: "<<value;
   cout<<endl<<"Number of occurrences: "<<count;

	
return 0;
}
