#include<iostream>
using namespace std;
class complex{
	private:
	int a,b;
	friend complex sumComplex(complex x,complex y);
	public:
		void setNumber(int n1,int n2){
			a=n1;
			b=n2;
		}
		void printNumber(){
			cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
		}
			
};
complex sumComplex(complex x,complex y){
			complex z;
			z.setNumber(x.a + y.a , x.b + y.b);
			return z;
		}
int main(){
complex o1,o2,o3;
o1.setNumber(3,4);
o1.printNumber();
o2.setNumber(8,6);
o2.printNumber();

o3 = sumComplex(o1,o2);
o3.printNumber();	
}
