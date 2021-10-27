#include <iostream>
using namespace std;
int main()

{
     int a ; 
    cout<<"Enter no to check prime   a ";
    cin>>a;
    int flag = 0 ; 
    int i =2 ; 
    while(i*i<a)
	{
		if(a%i==0)
		{
    		
    		
    		flag=1 ; 
    	    break ; 	
		}
    	i++;
	}
	if(flag==0){
		cout<<"prime no " ; 
	}
	else{
		cout<<"not prime" ; 
	}

    return 0;
}
