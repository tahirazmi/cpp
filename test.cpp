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
	 
	for ( int i=s.length()-1; i>=0;  i--)
	{
		
			if(s.at(i)=='1' && i!=0)
			{
				s.at(i)='0';
				
					}
					
					else if(s.at(i)=='1' && i==0)
			{
				s.at(i)='0';
				s='1'+s;
	 			twos=s;
				
					}
							
	        else if(s.at(i)=='0')
	        {
	        	s.at(i)='1';
	        	twos=s;
	        	break;
	
			}
			
			
			
			 
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
