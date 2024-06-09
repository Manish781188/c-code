//inheritance
#include<iostream>
using namespace std;
class Papa{
    protected:
         int money=1000;
    public:
        void displayBalance(){
            cout<<"remaining balance in papa ki pocket "<<money<<endl;
        }
};
class bacha : public Papa{
     public:
     void kharche(int amt){
         money=money-amt;
        cout<<"Available balance of papa is "<<money<<endl;
     }
};


int main(){
     Papa p1;
     p1.kharche(100);
    
     bacha b1;
     b1.kharche(200);
     b1.displayBalance();
    
    
    // bacha v1;
    // v1.money=100;
    // v1.displayBalance();
    
}
