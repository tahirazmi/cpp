#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Account{
     private:
     	string name ; 
     	long mobile_no ; 
     	int pin;
     	float balance ; 
     	string address ; 
     	long accno ;
     	static int no_of_acc;
     	
    public:
    	Account(){
		}
    	void get_Account(string name , long mobile_no , string address , int pin, float balance = 1000){
    		this->name = name;
    		this->mobile_no = mobile_no;
    		this->address = address;
    		this->balance= balance;
    		this->pin= pin;
			no_of_acc++;
    		this->accno =98750000+no_of_acc ; 
    		cout<<" your account no is "<<this->accno<<endl ;
    		cout<<" your balance is "<<this->	balance<<endl ; 
    		
    		
		}
		long get_acc(){
			return this->accno ;
		}
		int pin_ver(){
			return this->pin;
		}
		void withdraw(int bal){
			if(this->balance > bal){
				this->balance -= bal ; 
				cout<<"your money is withdraw"<<endl ; 
			}else{
				cout<<"Insuffient balance "<<endl; 
			}
			
			
		}
		
		void deposit(int amt){
			this->balance+=amt ; 
			cout<<"your money is deposited"<<endl ; 
		}
		
	    void detail()	{
	      cout<<"Account name "<<this->name<<endl ; 
		 cout<<"Account detail "<<this->accno<<endl;
		  cout<<"Account balance "<<this->balance<<endl ; 
		   cout<<"Account address "<<this->address<<endl ; 
		    cout<<"Account mobile "<<this->mobile_no<<endl ; 
			  
		}
};

 int  Account::no_of_acc = 0;
 
int main() {
//	Account Azmi("Azmi", 8604541996, "saraimeer, Azamgarh, UP", 5000);
//	Account Ali("Ali", 8279733328, "agdjaj addaj abdjdba");
    Account a[5] ; 
    int ch ; 
       int i = 0 ; 
		while(1){
			 cout<<"\nMAIN MENU";
		cout<<"\n1. NEW ACCOUNT";
		cout<<"\n2. DEPOSIT AMOUNT";
		cout<<"\n3. WITHDRAW AMOUNT";
		cout<<"\n4. BALANCE ENQUIRY";
		cout<<"\n5. ALL ACCOUNT HOLDER LIST";
		//cout<<"\n\n06. CLOSE AN ACCOUNT";
		cout<<"\n7. MODIFY AN ACCOUNT details ";
		cout<<"\n8. EXIT";
		cout<<"\nSelect Your Option (1-8) "<<endl;
			cin>>ch ; 
			if(ch==1){
						string name ; 
						long mob ;
						int pin;
						string address ; 
						cout<<"ENTER NAME "<<endl ; 
						cin>>name ; 
						cout<<"ENTER mob "<<endl ; 
						cin>>mob ; 
						cout<<"Enter password"<<endl;
						cin>>pin;
						cout<<"ENTER address  "<<endl ;
						cin>>address ;
						
						a[i].get_Account(name , mob , address, pin) ; 
						i++ ; 
			
			}
			
		else if(ch==2){
					  long acc   ; 
					  float amt ; 
					  
					  cout<<"ENTER acc "<<endl ;
					  cin>>acc ; 
					  cout<<"ENTER amt "<<endl ;
					  cin>>amt ;
					  int j = 0 ;  	
					  while(j<5){
					  	if(acc==a[j].get_acc()){
					  		a[j].deposit(amt) ; 
					  		break ; 
						  }
					  }	
			
		}
		else if(ch==3){
						  long acc   ; 
						  float amt ;
						  int pass;
						  cout<<"ENTER acc "<<endl ;
						  cin>>acc ; 
						  
						  cout<< "Enter your Pin"<<endl;
						  cin>>pass;
						  cout<<"ENTER amt "<<endl ;
						  cin>>amt ;
						  int j = 0 ;  	
						  while(j<5){
						  	if(acc==a[j].get_acc() && pass==a[j].pin_ver() ){
						  		a[j].withdraw(amt) ; 
						  		break ; 
							  }
						  }
		  	
			
		}	
			else if(ch==4){
						  long acc   ; 
						  cout<<"ENTER acc "<<endl ;
						  cin>>acc ; 
						  int j = 0 ;  	
						  while(j<5){
						  	if(acc==a[j].get_acc()){
						  		a[j].detail(); 
						  		break ; 
							  }
						  }
						  	
							
		}
		else if(ch==5){
							for(int j = 0 ; j < i ; j++ ){
								a[j].detail();
							}
		}
		else {
		break  ; 
		}
		
		   
		}
		
	return 0;

}
