//class Book
//data member private - title author available
//member functions borrow return detail
#include<iostream>
#include<string>
using namespace std;

class Book{
  private:
    string title;
    string author;
    bool availability;
    int qty;
  
  public:
    Book(string title,string author,int qty){
      this->title=title;
      this->author=author;
      availability=true;
      this->qty=qty;
    }
    void borrowBook(int amt){
      if(availability==true){
        cout<<"Book ' "<< title << "' by "<< author << " has been borrowed"<<endl<<endl;
        availability=false;
        qty-=amt;
      }
      else{
        cout<<"Book ' "<< title << "' by "<< author << " is not available"<<endl;
      }
    }
    void returnBook(int amt){
      if(!availability){
        cout<<"Book ' "<< title << "' by "<< author << " has been returned: "<<endl<<endl;
        availability=true;
        qty+=amt;
      }
      else{
        cout<<"kiski book utha laya bee : "<<endl;
      }
    }
    void DisplayDeatils(){
      cout<<"Title : "<<title<<endl;
      cout<<"Author : "<<author<<endl;
      cout<<"Availability : "<<availability<<endl;
      cout<<"Quantity of books available : "<<qty<<endl;
    }
};

int main(){
  Book b1("Harry Potter","J.k Bhaiya",5);
  Book b2("Spiderman","Stan babbu",10);
  
  b1.borrowBook(2);
  b1.returnBook(1);
  cout<<endl;
  b1.DisplayDeatils();
  
  
//  cout<<endl;
//  b2.borrowBook();
//  cout<<endl;
//  b2.returnBook();
//  cout<<endl;
//  b2.DisplayDeatils();
  
  
  
  
  
  
}
