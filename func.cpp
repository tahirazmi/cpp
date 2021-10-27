#include <iostream>
using namespace std;

void swap(int &a, int &b){
 	a  = b-a + (b=a) ; 
//cout<< " first Number in swap "<<a<< endl;
//cout<< "Second Number  in swap "<<b<< endl; 
 	return ;
 }
 void g(){
 	cout<< "Hello, Good Morning"<<endl
	 ;
 }
 
 
 int main()
 
{
	int a, b;
	g();
cout<< "Enter first Number"<< endl;
cin>> a;
cout<< "Enter Second Number "<< endl;
cin>> b;
cout<< " before swap "<<endl ;
cout<< " first Number"<<a<< endl;
cout<< "Second Number "<<b<< endl;
swap(a, b);
cout<< " After swap "<<endl ;
cout<< " first Number"<<a<< endl;
cout<< "Second Number "<<b<< endl;



return 0;
}

 
