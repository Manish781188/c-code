#include<iostream>
using namespace std;
class SBI{
	private:
		string name="SBI_user ";
	public:
	SBI(){//c;ass name funcation
	cout<<"User please enter your name"<<endl;
	cin>>name;
	}
	SBI(string x){
		name=x;
		cout<<"User name is :"<<name<<endl;
	}
	
};

int main(){

  SBI  user1;//default constructor
 	SBI user2("manish");//perametrise constructor-
}
