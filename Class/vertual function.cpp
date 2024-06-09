#include<iostream>
using namespace std;
class  A{
	public:
     virtual void show(){
			
			cout<<"I an inside the base class"<<endl;
			
		}
};
class B : public A{
	
	public:
		void show(){
			cout<<"I am is inside derive class"<<endl;
		}
};

int main(){
	A *ptr;
	B o1;
	ptr=&o1;
	ptr->show();
}
