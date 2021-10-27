#include<iostream>

using namespace std;

void repeated( int mat[4][5], int temp[4] )
{
   int x=0, minrow = 0 ; 
  while(temp[minrow] >=0){

   	for( int i =0 ; i < 4 ; i++){	
   		if(mat[i][temp[i]]  < mat[minrow][temp[minrow]]  )      
   	       {		
   		    minrow  = i; 
   	      }
	   }
	  // cout << " min row = "<< minrow<<endl;
   //	cout<<mat[minrow][temp[minrow]] ; 
   	int minval = 0 ; 
   	for(int i = 0 ; i < 4 ; i++){
   			if(temp[i]==-1){
		   		break ;
			   }
   		if(mat[minrow][temp[minrow]] == mat[i][temp[i]]){
   			minval++ ; 
           			
		   }else{
		   	temp[i]-=1 ; 
		   	 
		   }
	   }
	   
	   if(minval==4){
	   	x++;
	   	   cout<<mat[minrow][temp[minrow]] <<"     ";
	   	   minrow=0;
			  for(int i = 0 ; i < 4 ; i++){
			  	temp[i]-=1 ; 
			  }   
	   }
   	
   	
   	
   }
   cout << " x = "<< x;
   if (x==0)
   {cout << " no common element ";
   }
}

int main()
{
	int i, j, n, num;
	int mat[4][5] = {   {2, 4, 5, 9, 12},
                    {3, 4, 5, 8, 10},
                    {2, 3, 7, 9, 11},
                    {1, 3, 4, 5, 9}
                  };
	

		int temp[4] ; 
		for (int k=0; k<4; k++)
		{
			temp[k]= 4 ; 
		
	}
     	repeated(mat, temp);
	
	
	return 0;
}
