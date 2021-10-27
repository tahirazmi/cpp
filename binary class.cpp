#include<iostream>
#include<string>
using namespace std;

class binary
{
	string s;
	public:
		void read(void);
		void chk_bin(void);
		void display(void);
		void ones_comp(void);
		
};
void binary:: read(void){
	cout<< "Enter a number "<< endl;
	cin>>s;
}
void binary :: chk_bin(void){
	for (int i=0; i<s.length(); i++)
	{
		if (s.at(i)!='0'&&s.at(i)!='1')
		{ cout<< "Incorrect binary number ";
		exit(0);
		}
	}
}
void binary :: display(void){
	for (int i=0; i<s.length(); i++)
	{
		cout<<s .at(i);
	}
	cout<< endl;
}
void binary :: ones_comp(void){
	chk_bin();
	for (int i=0; i<s.length(); i++){
		if (s.at(i)=='0')
		{
			s.at(i)='1';
		}
		else{
			s.at(i)='0';
		}
	}
}

int main()
{
	binary b;
	b.read();
	cout<< "Entered number is ";
	b.display();
	b.ones_comp();
	cout<< "Complemented binary number is ";
	b.display();
	
	
	return 0;
}





