#include<iostream>
using namespace std;

class calculate{
	public:
		
		int sum(int a ,int b){
			return a+b;
		}
		int sum(int a ,int b,int c){ //function overloding
			return a+b+c;
		}
			int sum(int a ,int b,int c,int d){
			return a+b+c+d;
		}
	
};

int main(){
calculate obj;
int result=obj.sum( 1,3,4);
	cout<<"sum :"<<result<<endl;
int result2=obj.sum( 1,3,4,5);
	cout<<"sum :"<<result2<<endl;	
}
