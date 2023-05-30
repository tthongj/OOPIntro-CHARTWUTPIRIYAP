#include <iostream>
using namespace std;

class student{
private:
  long id;
  int age;
  string name;

public:
   void set_age(int a=0){ age=a;} 
   int get_age(){ return age;}
   void set_name(string="Yme");
    void print_name();
 
};

void student::set_name(string n){
  name=n;
  
}

void student::print_name(){
  cout<<"Name:"<<name<<endl;
}