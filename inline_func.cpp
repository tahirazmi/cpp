#include<iostream>
using namespace std;
int factor( int x)
{
	if (x<=1){
		return 1;
			}
	
 return x*factor(x-1);
 }  

int main()
{
	int a;
	cin>>a;	
	cout << factor(a)<<endl;
	return 0;
}
