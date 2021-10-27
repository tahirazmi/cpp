#include <iostream>
using namespace std;
void comp(string s)
{
	string twos, ones;
	twos=ones="";
	
	for ( int i=0; i<s.length(); i++)
	{
		if (s.at(i)=='0')
		{
			s.at(i)='1';
		}
		else  {
			s.at(i)='0';
		}
	}
	
	ones=s;
	        
	cout<< endl;
	 int i;
	for ( i=s.length()-1; i>=0;  i--)
	{
		
			if(s.at(i)=='1')
			{
				s.at(i)='0';
				
					}		
							
	        else if(s.at(i)=='0')
	        {
	        	s.at(i)='1';
	        	twos=s;
	        	break;
	
			}	 
	}
		if(i==-1)
			{
			
				s='1'+s;
	 			twos=s;
	 		}
	cout<<"one's complement of given binary number is "<<ones<<endl;
	cout<<"two's complement of given binary number is "<<twos;
}

int main(){
	string s;
	cout<< " enter binary number "<< endl;
	cin>> s;
	comp(s);
	
	
	return 0;
}
