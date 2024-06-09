#include<iostream>
#include<string>
//class bankaccount 
//attributes acc no,name,balace private
//function -> withdraw deposit displaybalance;
using namespace std;

class BankAccount{
  private:
    string accNo="XXXXX";
    string name="Bank_User";
    float balance=0.0;
  public:
    BankAccount(){
//      accNo="XXXXX";
//      name="Bank_User";
//      balance=00.00;
      cout<<"Enter your name :"<<endl;
      cin>>name;
      cout<<"enter your account no. "<<endl;
      cin>>accNo;
    }
//    BankAccount(string accNo,string name){
//      this->accNo=accNo;
//      this->name=name;
//      this->balance=balance;
//    }
    
    void withdraw(int amt){
      if(balance>amt){
        balance=balance-amt;
        cout<<"after withdrawl of " <<amt<<endl<<" your balance is : "<<balance<<endl;
      }
      else{
        cout<<"paisa hi nhi hai "<<endl;
      }
    }
    void deposit(int amt){
      balance=balance+amt;
      cout<<"After depositing of  "<<amt<<endl <<"your balance is : "<<balance<<endl;  
    }
    void DisplayDetails(){
      cout<<"User name is :"<<name<<endl;
      cout<<"User account  number is : "<<accNo<<endl;
      cout<<"User account balance is : "<<balance<<endl<<endl;
      }
      
    
};



int main(){
  
  BankAccount User2,User1;
 
  User2.deposit(1000);
  User2.withdraw(200);
  User2.deposit(1500);
   User2.DisplayDetails();
 User1.deposit(1000);
 User1.withdraw(500);
 User1.deposit(2000);
  User1.DisplayDetails();
  
}
