#include<iostream>
#include<string>
using namespace std ; 
int main(){
	string st1= "tahir", st2 = "azmi" ;
   //	getline(cin , st1);    //input full line
    // getline(cin , st2);
    //st1.insert(2 , "r") ;   //  insert at specific location  location
	//st1.replace(1 , 1 , "pwgfjf" ); 
	string st4 = st1.substr(1 , 3) ;  
    cout<<st1<<endl ;
    cout<<st4<<endl ; 
	cout<<st1.compare(st2)<<endl ; 
	cout<<"the name is "<<st1<<endl ; 
	cout<<"the length of "<<st1.length()<<endl  ; // return len of string ;  
    cout<<"the size of "<<st1.size()<<endl  ; // return len of string  ; 	
    cout<<st1.empty()<<endl ;   // return the bool val 0 ya 1 
	// st1.append(st2) ;
	string st3 = st1 + "    " +  st2 ; 
	cout<<"concat "<<st3 ;   
	cout<<" full name	 "<<st1<<endl ;  
	return 0 ; 
}
