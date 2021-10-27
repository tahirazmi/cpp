#include <iostream>  
using namespace std;  
int main()  
{  
int i,j;
int a[i][j],b[i][j],mul[i][j],r1,r2,c1,c2 ,k;    
cout<<"enter the number of row of first matrix=";    
cin>>r1;    
cout<<"enter the number of column of first matrix=";    
cin>>c1;    

cout<<"enter the number of row of second matrix=";    
cin>>r2;    
cout<<"enter the number of column of second matrix=";    
cin>>c2; 

while(c1!=r2)
{cout<< " Column of first matrix is not equal to row of second matix "<< endl;
cout<<"enter the number of row=";    
cin>>r1;    
cout<<"enter the number of column=";    
cin>>c1;    
cout<<"enter the number of row=";    
cin>>r2;    
cout<<"enter the number of column=";    
cin>>c2;    

   }   

cout<<"enter the first matrix element="<<endl;    
for(i=0;i<r1;i++)    
{    
for(j=0;j<c1;j++)    
{    
cin>>a[i][j];  
}    
}    
cout<<"enter the second matrix element="<< endl;    
for(i=0;i<r2;i++)    
{    
for(j=0;j<c2;j++)    
{    
cin>>b[i][j];    
}    
}    

cout<<" first matrix  is ="<<endl;    
for(i=0;i<r1;i++)    
{    
for(j=0;j<c1;j++)    
{    
cout<<a[i][j]<<"   ";  
}  
cout<<endl;  
} 
cout<<"second  matrix  is ="<<endl;    
for(i=0;i<r2;i++)    
{    
for(j=0;j<c2;j++)    
{    
cout<<b[i][j]<<"   ";  
}   
cout<<endl; 
}    
   

for (i=0; i<r1; i++)
{for (j=0; j<c2; j++)
{
	mul[i][j]=0;
}
}
cout<<"multiply of the matrix="<<endl;    
for(i=0;i<r1;i++)    
{    
for(j=0;j<c2;j++)    
{      
for(k=0;k<c1;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
   
for(i=0;i<r1;i++)    
{    
for(j=0;j<c2;j++)    
{    
cout<<mul[i][j]<<"   ";    
}    
cout<<endl;    
}    
return 0;  
}    
