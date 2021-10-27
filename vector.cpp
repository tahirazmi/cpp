#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int i;
 vector<int> v1;
//for (i=0; i<5; i++ )
//{
//	int a ; 
//cin>>a ; 
//v1.push_back(a);	
//}


for (i=0; i<5; i++ )
{
	int a ; 
cin>>a ; 
v1[i]=a;	
}
//for(i =0 ; i < 5 ; i++ )
//	{
//		cout<<v1.at( i )<< "  "<< endl
//	;}
	for(i =0 ; i < 5 ; i++ )
	{
		cout<<v1[i]<< "  "<< endl
	;}
	
//	int b=v1.size();
//	int c=v1.capacity();
//	cout <<b<<"  "<<c;
//	cout<<v1.front()<< endl
//	 ; 
//	cout<<v1.back() ; 
	return 0;
}
