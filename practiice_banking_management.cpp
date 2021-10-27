#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Account{
	string name;
	long acc_no;
	int pin;
	float balance;
	string address;
	long mob_no;
	static int no_of_acc;
	public :
		Account(){
		}
		void get_account(string name, long mob_no, string address, int pin, float balance=1000)
		{
			this->name=name;
			this->mob_no=mob_no;
			this->address=address;
			this->balance=balance;
			this->pin=pin ;
			no_of_acc++;
			this->acc_no= 9876+no_of_acc;
			cout<< "Your acount number is "<<this->acc_no<<endl;
			cout<< "Your balance is "<< this->balance<<endl;
			
		}
	
	
};
int  Account::no_of_acc = 0;

int main()
{
	Account a;
	a.get_account("Azmi", 860454, "sanjar", 4444);
	
	
	
	
	return 0;
}


