#include <iostream>
#include<iostream>
using namespace std;

void twocomp(string s)
{
	for ( int i=0; i<s.length(); i++)
	{
		if (s.at(i)=='0')
		{
			s.at(i)='1';
		}
		else  {
			s.at(i)='0';
		}
	}
	for(int i =0 ; i < s.length() ; i++){
		cout<<s.at(i);
	}
	cout<<endl;
	int c =1 ; 
	for ( int i=s.length()-1; i>=0;  i--)
	{
	        int  ch = int(s.at(i)) - int('0' ) + c ; 
	        cout<<ch<<endl;
			 if	(ch==2){
			 	s[i] = '0' ; 
			 	c=1 ; 
			 	continue ; 
			 }
			 s[i] = char(ch + int('0'));
			 c=0; 
	}
	for ( int i=0; i<s.length(); i++)
	{
		cout<< s.at(i);
	}
	
	
}

int main(){
	string s;
	cout<< " enter binary number "<< endl;
	cin>> s;
	twocomp(s);
	
	
	return 0;
}
