#include <iostream>
using namespace std;
int main()

{
     char opr ;
     int a , b;
     cout<<"enter first number ";
     cin>> a;
     cout<< "enter operator ";
     cin>> opr;
     cout<< "enter second number ";
     cin>> b;
     
switch (opr)
{
	
case '+': cout<< a + b ;
break;
case '-': cout<< a-b ;
break;
case '*' : cout<< a*b;
break;
case '/' : cout << a/b;
break;
case '%' : cout<< a%b ;
break;
}
    
    return 0;
}
