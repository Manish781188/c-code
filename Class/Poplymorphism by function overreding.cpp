#include<iostream>

using namespace std;
class Home{
    public:
        void Ark(){
            cout<<"hello i  am a son"<<endl;
        }
};
class company:public Home{
   private:
    // void Ark(){
    //     cout<<"hello i am an employee"<<endl;
    // }
};
class college:public company{
    public:
    // void Ark(){
    //     cout<<"hello i am a student"<<endl;
    // }
};

int main(){
    
    college c1;
    c1.Ark();
    
    
    
    
}
