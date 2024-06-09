//encapsulation
#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length=1;
    public:
        int breadth;
    
    void setLength(int l){
    if(l>0){
        length=l;
        }
    }
    int Area(){
        return length*breadth; 
    }
    
};




int main(){
    Rectangle r1,r2;
    
    r1.setLength(10);
    r1.breadth=20;
    
    int result=r1.Area();
    cout<<"Area if 1st reactnagle is "<<result<<endl;
    
    r2.setLength(5);
    r2.breadth=8;
    
    int result2=r2.Area();
    cout<<"Area if 2nd reactnagle is "<<result2<<endl;
    
    
    
    
}
