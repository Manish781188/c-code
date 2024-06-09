#include<iostream>
using namespace std;
class SBI{
	private:
		string name="SBI_user ";
	public:
	SBI(){//c;ass name funcation
		cout<<"Hello user please enter your name :"<<endl;
		cin>>name;
		display();
	}
	void display(){
		cout<<"user name is :"<<name<<endl;
	}
	
};

int main(){
  SBI  user1;

}
