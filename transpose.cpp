#include <iostream>
using namespace std;
int main()
{
   int a[3][4] , b[3][3] , c[3][3] ; 
   for(int i =0 ; i <3 ; i++){
   	for(int j = 0 ; j < 4 ; j++ ) {
   		cin>>a[i][j] ; 
	   }
}
//	    for(int i =0 ; i <3 ; i++){
//   	for(int j = 0 ; j < 4 ; i++ ) {
//   		cin>>b[i][j] ; 
//	   }
//}
//	   
	    for(int i =0 ; i <3 ; i++){
   	for(int j = 0 ; j < 4 ; j++ ) {
   		cout<<a[i][j]<<"   " ; 
	   }
	   cout<<endl ; 
}

//cout<<"b  matrix "<<endl ; 
//      for(int i =0 ; i <3 ; i++){
//   	for(int j = 0 ; j < 4 ; i++ ) {
//   		cout<<b[i][j]<<"   " ; 
//	   }
//	   cout<<endl ; 
//}
cout<<"    transpose "<<endl ; 
      for(int i =0 ; i <4  ; i++){
   	for(int j = 0 ; j < 3 ; j++ ) {
   		cout<<a[j][i]<<"   " ; 
	   }
	   cout<<endl ; 
}
return 0 ; 
}


