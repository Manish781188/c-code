//inheritance Multilevel
#include<iostream>
using namespace std;

class shape{
    public:
        int a;
        int b;
    void get_data(int n,int m){
        a=n;
        b=m;
    }
};
class Rectangle : public shape{
    public:
    int rect_area(){
        int result = a*b;
        return result;
    }
    
};
class triangle : public shape{
    public:
    float tri_area(){
        float result=0.5*(a*b);
        return result;
    }
};

int main(){
  Rectangle r1;
  triangle t1;
  
  int length=10,breadth=20,base=5,height=7;
  
  
    r1.get_data(length,breadth);
    int result=r1.rect_area();
    cout<<"Area of recatngle is "<<result<<endl;
    
    t1.get_data(base,height);
    float result2=t1.tri_area();
    cout<<"Area of triangle is "<<result2<<endl;
    
    
    
}
