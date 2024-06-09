#include<iostream>
#include<string>
using namespace std;
class Car_rental_system{
	private :
		string name;
		bool avibility=true;
		int model;
		public:
		Car_rental_system(){
		cout<<"Enter the car name :"<<endl;
		cin>>name;
		cout<<"Enter the model of car :"<<endl;
		cin>>model;	
				}	
			
	void rent(){
		if(avibility==true){
			cout<<"car can be rented"<<endl;
		}
		else{
			cout<<"car can be no rented"<<endl;
		}
	}
	void check_model(){
		if(model<=2013){
			cout<<" car is not issu"<<endl;
		}
		else{
			cout<<"cor is issu"<<endl;
		}
	}
	void Display(){
		
	}
};

int main(){
	
	Car_rental_system obj1;
	obj1.rent();
	obj1.check_model();
}
