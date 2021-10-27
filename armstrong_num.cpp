#include <iostream>
#include<cmath>
#include <string>
using namespace std;

		int main(){
		int i, j, n, temp  rem;
		double ams=0;
		cout<< " enter a number ";
		cin>>n;
		temp =n;
		j=0;
		
		while (temp!=0){
		
			temp=temp/10;
			j++;
		}
		temp=n;
		while(temp!=0){
			rem=temp%10;
			temp/=10;
			ams+= pow(rem, j);
			cout << " print value of ams "<< ams<< endl;
		}
	  if (ams==n){
	  	cout<< " given number is amstrong number ";
	  }
	  else{
	  	cout<< " not a amstrong number";
	  }

	
	
	
	return 0 ; 
}
