//22A91A12B0
#include<iostream>
using namespace std;
class Student{
	private:
		string name,rollno;
		int bc,ph;
		double per;
	public:
		void set(string n,string r,int b,int p,double p1)
		{
			this->name=n;
			this->rollno=r;
			this->bc=b;
			this->ph=p;
			this->per=p1;
		}
		void get()
		{
			cout<<name<<" "<<rollno<<" "<<bc<<" "<<ph<<" "<<per;
		}
		
};
int main()
{
	Student s1;
	s1.set("ayyappa","22a91a12b0",0,7672,74.43);
	s1.get();
}
