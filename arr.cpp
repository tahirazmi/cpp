#include <iostream>
using namespace std;
int main()
{

int i, sume=0, sumo=0;
int arr[6];
cout << "Enter value of number in array "<<endl;
for (i=0; i<6; i++)
{
cin>> arr[i];
}
for (i=0; i<6; i+=2)
{
	sume += arr[i];
}
for (i=1; i<6; i+=2)
{
	sumo += arr[i];
}
cout<<"Sume is "<<sume<<endl;
cout<<"Sumo is "<<sumo;
return 0;
}
