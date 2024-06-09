//inheritance Multipule
#include<iostream>
using namespace std;

class A{
    protected:
        int a;
    public:
        void get_a(int n){
            a=n;
        }
};

class B{
    protected:
        int b;
    public:
        void get_b(int n){
            b=n;
        }
};

class c : public A, public B{
    public:
    void display(){
        cout<<"The value of a "<<a<<endl;
        cout<<"The value of b "<<b<<endl;
        cout<<"addition of A + b is "<<a+b<<endl;
        
    }
};


int main(){
   c o1;
   o1.get_a(10);
   o1.get_b(20);
   
   o1.display();
   
    
}
