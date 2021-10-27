#include <iostream>
#include<cmath>
#include <string>
using namespace std;

		int main(){
		int i, j, n, temp,   rem;
		int num;
	//	cout<<"Enter number  ";
	//	cin>>j;
		
		for (num=10; num<1000; num++)
		{
		int sum=0;
		
		temp=num;
		while (temp>0)
		{
			rem=temp%10;
			temp/=10;
			sum =(sum*10)+ rem;
			
			
		}
		if (num==sum){
			cout<< sum <<" ";
		}
		
	}
		
		
		return 0;
	}
