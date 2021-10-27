#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
  unordered_map< char , int >  emp ; 
  char arr[10] = { 'a' ,  'b' ,  'c' , 'b' , 'a' , 'c' , 'c' , 'd' , 'b' , 'a'  } ; 	
   
  for(int i = 0  ; i < 10 ; i++ )
  {
  	char ch = arr[i] ; 
	 // cout<<ch<<endl ; 
  	if(emp.find(ch) ==emp.end() ){
  		emp[ch] = 1 ;  
  		//cout<<ch<< i <<endl ; 
	  }
	  else{
	  	int a =  emp.at(ch)    ; 
	  	//cout<<a<<"      "<<i <<endl ; 
	  	emp[ch] = a + 1 ;  
	  	
	  }  
  }
  
  
  for(auto x : emp){
  	
  	cout<<x.first <<" no of time " <<x.second<<endl ; 	
  }



	return 0;
}
