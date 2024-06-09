#include<iostream>
using namespace std;
  class count{
  	private:
  		
  		int value;
  		int score;
  		public:
  			count(){
			  value=5;
			  score=40;
			  }
			  void operator ++(){ //operator overlood
			  	value=value+2;
			  	score=score-3;
			  }
  	  void Display(){
  	  	cout<<"Count is "<<value<<endl;
  	  	cout<<"Count1 is "<<score<<endl;
		}
  	
  };  
    
    
    
int main(){

count c1;
++c1;
c1.Display();

	
}
