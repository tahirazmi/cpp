#include <iostream>
using namespace std;
int main()
{
	int a, b, c, x;
	cout<< "Enter Three numbers ";
	cin>> a>> b>> c;
	if (a>=b&&a>=c){
		cout<< " Greater number is " <<a;
	}
	if (b>=b&&b>=c){
		cout<< " Greater number is " <<b;
	}
if (c>=a&&c>=b){
	cout<< " Greater number is "<< c;
}
	
	return 0;
}
