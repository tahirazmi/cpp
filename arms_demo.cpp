#include <iostream>
#include<cmath>
#include <string>
using namespace std;

		int main(){
		int i, j, n, temp,  rem;
		int num;
		cout<<"Enter number  ";
		cin>>num;
	//	cout<< " enter a number ";
	//	cin>>;
		for (n=100; n<num; n++)
		{
		double ams=0;
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
			//cout << " print value of ams "<< ams<< endl;
		}
	  if (ams==n){
	  	cout<<ams<< "  ";
	  }
	  //else{
	  //	cout<< " not a amstrong number";
	  //}

}
	
	
	return 0 ; 
}
