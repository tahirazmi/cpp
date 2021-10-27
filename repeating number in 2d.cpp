#include<iostream>

using namespace std;

void repeated( int mat[4][5], int t, int k )
{
	
	int j, i=1, x=0;
		for (j=0; j<5; j++)
		{
			
			if (t==mat[i][j] && i!=3)
			{
			i++;
			j=0;
			}
			else if (t==mat[i][j] && i==3)
			{
				cout << t<< "  ";
				x++;
			}
			
		}
		if (x==0&&k==4)
			{
				cout << " no common element " ;
			}
	
	
}

int main()
{
	int i, j, temp, n, num;
	int mat[4][5] = {   {1, 2, 3, 4, 5},
                    {2, 4, 5, 8, 10},
                    {3, 4, 7, 5, 11},
                    {1, 2, 3, 4, 5},
                  };
	

		
		for (int k=0; k<5; k++)
		{
			temp= mat[0][k];
			repeated(mat, temp, k);
	}

	
	
	return 0;
}
