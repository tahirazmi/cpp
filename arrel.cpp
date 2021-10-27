#include <bits/stdc++.h>
using namespace std;
void findRepeat(int arr[],int n){
   int count=1; //count of repeated element
   int value=0; //to store repeated element
   for(int i=0;i<n;i++){
      if(arr[i]==arr[i+1]){
         count++;
         value=arr[i];
      }
   }
    //for last element
   cout<<"Repeated Element: "<<value;
   cout<<endl<<"Number of occurrences: "<<count;
   cout<<endl<<n;
}
int main(){
   int Arr[]={ 2,3,4,5,5,5,6,7,8 };
   int len=sizeof(Arr)/sizeof(Arr[0]);
   findRepeat(Arr,len);
   
   return 0;
   
}
