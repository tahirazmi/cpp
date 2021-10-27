#include <iostream>
using namespace std;

class item  {
	public:
		string name ; 
		int num ; 
		float cost  ; 
		void getdata(string nm , int a , int b ){
			name = nm ; 
			num = a ; 
			cost = b ; 
		}
		void showdata(){
				cout<<" name of the items "<<name<<endl ;
		//cout<<" id of the items "<<num<<endl ;
			cout<<" cost of ther item "<<cost<<endl ;
			cout<<endl;   
		}

};

int main()
{
item listt[5] ; 
int id ; 
 listt[0].getdata( "milk", 101 , 28.00);
 listt[1].getdata( "sugar", 102 , 35.50);
 listt[2].getdata( "biscuit", 103 , 10);
 listt[3].getdata( "tea", 104 , 60);
 listt[4].getdata( "cofee", 105 , 200);
 cout<<"enter the id to search product "<<endl ; 
 cin>>id ; 
 for(int i =0  ; i < 5 ; i++ ){
 	 if(id==listt[i].num){
 	 	listt[i].showdata();
 	 	break ; 
	  }
 }		
	
	
	return 0;
}
