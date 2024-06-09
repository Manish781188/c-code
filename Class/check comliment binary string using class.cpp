#include<iostream>
#include<string>
using namespace std;
//nesting of member functions

class binary{
    private:
        string s;
        int chk_bin();
    public:
    void read();
    void compliment();
    
    void display();
    
};
void binary :: read(){
    cout<<"Enter a binary string : "<<endl;
    cin>>s;
}

int binary :: chk_bin(){
    int flag=0;
    for(int i=0;i<s.length();i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Incorrect binary string . "<<endl;
            flag++;
            return -1;
        }
    }
    if(flag==0){
        cout<<"correct binary string . "<<endl;
    }
    return 1;
}

void binary :: compliment(){
    int result;
    result=chk_bin();
    if(result == 1)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)=='0')
            {
                 s.at(i)='1';
            }
            else
            {
                s.at(i)='0';
            }
        }
    }
    else
    {
        cout<<"we can not perform compliment on a non binary string . "<<endl;
    }  
}
void binary :: display(){
    cout<<"your binary string is : "<<s;
}


int main(){
    
    binary b;
    b.read();
    b.compliment();
    b.display();    
}
