#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>> s;
	 cout<< s.length()<< endl;
	 for (int i=0; i<s.length(); i++)
	 {
	 	cout<< s.at(i);
	 }
	
	
	return 0;
}
