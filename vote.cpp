#include <iostream> 
#include <cmath>
using namespace std; 
  
// function to check even or not 

// Driver program to test above function 
int main() 
{ 
    int num ;
	cout<<"enter a number ";
	cin>> num; 
     
    
} 
{ 
    if (num % 2 == 0) 
    // jump to even 
        goto even;  
    else
    // jump to odd 
        goto odd;  
  
even: 
    cout << num << " is even"; 
    // return if even 
    return;  
odd: 
    cout << num << " is odd"; 
} 
  

