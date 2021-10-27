#include <iostream>
using namespace std;
int main()
{

int i,j, n=6;
int arr[6];
cout << "Enter value of number in array "<<endl;
for (i=0; i<6; i++)
{
cin>> arr[i];
}

	for (i=0; i<3; i++){
		int temp = arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1] = temp ; 
	
		
	}


for (j=0; j<6; j++)
{
cout<< arr[j];
}



return 0;
}
