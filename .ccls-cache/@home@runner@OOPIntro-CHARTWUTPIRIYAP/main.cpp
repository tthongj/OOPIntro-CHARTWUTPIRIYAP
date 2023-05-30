#include <iostream>
using namespace std;

#include "student.h"
#define N 10
int main(int argc, char* argv[]) {
  student s1,s2;
  student a[N];
  // Set age and set name for the first two ppl
  a[0].set_name("Vza");
  a[0].set_age();
  a[1].set_name("Yme");
  a[1].set_age(50);

  // 1. Ask for N names and N age using cin
  //2. Print name and age of all N ppl
  //3. Print name and age of the youngest person
  //4. Change input from cin to argv

  
 s1.set_name("Pun");  	s1.set_age(20); 
		s2.set_name("Joe");
		s2.set_age(17); 
		
     s1.get_age()>s2.get_age() ?	s1.print_name() :
 	     s2.print_name();
 cout <<"is older";

   

    
  }
  
  


