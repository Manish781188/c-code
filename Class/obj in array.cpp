#include<iostream>
using namespace std;

class Employee{
    private:
        int id;
        char name[30];
    public:
        void getData();
        void putData();
};
void Employee::getData(){
    cout<<"enter Id : "<<endl;
    cin>>id;
    cout<<"Enter Name : "<<endl;
    cin>>name;
}
void Employee::putData(){
    cout<<id<<" ";
    cout<<name<<" ";
    cout<<endl;
}

int main(){
    Employee emp[30];
    int n;
    cout<<"Enter the Number of employee : "<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++){
        emp[i].getData();
    }
    
    cout<<"employee Data :-"<<endl;
    
    for(int i=0;i<n;i++){
        emp[i].putData();
    }
    
}
