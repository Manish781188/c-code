#include<iostream>

using namespace std;

class HDFC{
    private:
        int balance;
    public:
        string name;
        string accno;
    
    void get(int balance){
        this->balance=balance;
    }
    void display(){
        cout<<"name is "<<name<<endl;
        cout<<"account number "<<accno<<endl;
        cout<<"balance "<<balance;
    }
    
        
};


int main(){
    HDFC u1;
    u1.name="Aditi";
    u1.accno="xyz";
    u1.get(10000);
    
    u1.display();
    
    /* form
    
    name
    age 
    submit{
    validation();
    database();
    */
    
}
