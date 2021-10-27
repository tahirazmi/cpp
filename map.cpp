#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
  unordered_map<int , string >  emp ; 
  emp[101] = "tahir" ; 
  emp[102]  = "adnan" ; 
  emp[104] = "habib" ; 
  emp[103] = "noumaan" ; 
  emp[105] = "chutiya" ;   	
//  cout<<emp[104]<<endl ; 	
//	cout<<emp.size()<< endl;
//	cout<<emp.at(101)<<endl ;
//	cout<<emp.find() ;

    if(emp.find(106) == emp.end()) {
    	cout<<" not present " <<endl ; 
	}
	else{
    	cout<<"present " <<endl ; 
	}

 
//	emp.insert(  make_pair( 106 , "noman" )  ) ;
//	for(auto x : emp) {
//		cout<<x.first<<"  "<<x.second<< endl;
//			}
//      unordered_map<int , string >  :: iterator i ; 
//				
//	for(i = emp.begin() ; i !=emp.end() ; i++ ){
//		cout<<i->first << "    "<<i->second <<endl  ;
//	}
//	
	return 0;
}
