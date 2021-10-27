#include<iostream>
#include<string>
using namespace std;
class figure{
	private:
	string cir;
	int a, b ,c ;
	public:
	figure(){
		cout << "Enter some value"<< endl;
		
	}
	figure(int a )
	{
		cout << " given figure is circle "<<endl;
	}
	figure (int a, int b){
		cout<< "Given figure is rectangle "<< endl;
	}
	figure (int a, int b, int c){
		cout<< "Given figure is cube"<< endl;
	}
	
	
	};
	
	int main()
	{
		figure a;
		figure b(4);
		figure c(5, 6, 3);
		figure d(2, 3); 
		
		return 0;
	}
