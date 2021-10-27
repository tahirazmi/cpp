#include <iostream>
#include<iostream>
using namespace std;

void twos(string s)
{
	string ones, twos;
	string t =s;
	for (int i=0; i<s.length(); i++)
	{
		if (s.at(i)=='0')
		{s.at(i)='1';
		}
		else{
		s.at(i)='0';
		}
	}
	for (int i=0; i<s.length(); i++)
	{
		cout<<s.at(i);
	}
}


int main()
		{ string s;
		 cout<< "Enter binary number ";
		 cin>>s;
		 twos(s);
		 
		 return 0;
		}

