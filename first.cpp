#include <iostream>
using namespace std;
int main()

{
    int a, b, c;
    cout<<"Enter a ";
    cin>> a;
    b = a%2;
    c = a%3;
    if(a==0 && c==0){
        cout<<"divisible by both";
    }else if(b == 0 )
    {

        cout<<a<<"divisible by 2 only" ;
    }
    else if(c == 0 )
    {

        cout<<"divisible by 3 only" ;
    }
    else {
         cout<<"divisible by none";    }


    return 0;
}
