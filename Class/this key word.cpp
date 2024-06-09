#include<iostream>
using namespace std;

class Library{
    private:
        int id;
        string author;
        string title;
    public:
        Library(int id,string author,string title){
            this->author=author;
            this->title=title;
            this->id=id;
        }
        void display()
        {
            cout<<author<<endl;
            cout<<title<<endl;
            cout<<id<<endl;
            cout<<endl;
        }
    
};


int main(){
    Library book1(101,"Jk bhaiya","Harry putar");
    Library book2(201,"Stan lee","marvel");
    book1.display();
    book2.display();
    
};
