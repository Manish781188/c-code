#include<iostream>
using namespace std;

int Sum=54;
int main(){
	int a,b;
	cout<<"Enter the value of A :"<<endl;
	cin>>a;
	cout<<"Enter the value of B :"<<endl;
	cin>>b;
	int sum=a+b;
   cout<<"sum of a and d:"<<sum<<endl;
   cout<<"Value of global sum is :"<<::Sum; //global vairiable access
}
