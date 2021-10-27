#include <iostream>
using namespace std;

class item  {
     private:
	 static int a,b ; 
	   int c ; 
	 public:
	 	void g_input(){
	 		a =10 ;  
		 }
	 	void display(){
	 		cout<<a<<endl ; 
		 }
		 void inc(){
		 	a++ ; 
		 }
		 static void fn(){
		 	cout<<a ; 
		 	cout<<b ; 
		 }
};
int item::a = 0 ; 
int main()
{	
     item i , j , k ;  // object declaration 
	// i.g_input() ; 
	 i.display(); 
	 i.inc() ;
	//j.g_input();
	j.display() ;
	j.inc() ;
	k.display() ; 
	return 0;
}
