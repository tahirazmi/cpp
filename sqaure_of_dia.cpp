#include<iostream>
using namespace std;

int main()
{
	int i, j, temp, n, num;
	int mat[4][5] = {   {1, 2, 3, 2},
                        {2, 4, 3, 8},
                        {3, 8, 7, 5},
                        {6, 2, 3, 5},
                    };

			
 				for (i=0; i<4; i++)
 				{
 					for (j=0; j<4; j++)
 					{
 						if (i==j )
 						{ 
 						n=mat[i][j]*mat[i][j];
						 cout<<n<< "  ";
						 
						 }
						 
						 if (i+j==3)
						 {
						 n=mat[i][j]*mat[i][j];
						 cout<<n<< "  ";	
						 }
					 }
					 cout<<endl;
				 }
 				
 				
		return 0;
}
