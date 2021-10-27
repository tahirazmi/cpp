#include<iostream>
#include<string>
using namespace std;
class student{
	private:
		int adm_no;
	string name;
	float eng, math, sci;
	float total;
	public:
		student (int adm_no, string name, float eng, float math, float sci)
	{
		this->adm_no= adm_no;
		this->eng = eng;
		this->math= math;
		this->name= name;
		this->sci= sci;
		this->total=0;
	}
	void ctotal()
	{ this->total = this->eng+ this->math+ this->sci  ;
	
	}
	void display(){
		cout<< adm_no<<"  "<< name<< "  "<< eng<< "  "<< math<< "  "<< sci<< "  "<< total<< endl;
	}
	
	};
	
	int main()
	{
		student Azmi(7321, "Azmi", 46, 56, 86);
		Azmi.ctotal();
		Azmi.display();
		return 0;
	}
