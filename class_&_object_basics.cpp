#include <iostream>
#include<string>
using namespace std;

class item  {
     private:
	 string name  ;
	 int id ; 
	 int cost ; 
	 int quantity ; 
	 public:
	 	item(){
	 		cout<<"we are in default"<<endl ; 
		 }
	 	item(string name , int id , int cost , int quantity ){
	 		//cout<<" we are in constructor"<<endl ;
			 this->name = name;
			this->id = id  ; 
			this->cost  = cost ;   
			this->quantity = quantity ; 
		 }
		 void dislpay(){
		 	cout<<name<<"  "<<id<<"   "<<cost<<"    "<<quantity<<endl ; 
		 }
};

int main()
{	
     item a ; 
     item milk("milk" , 101 , 28 , 20);  // object declaration 
	milk.dislpay();
	return 0;
}
