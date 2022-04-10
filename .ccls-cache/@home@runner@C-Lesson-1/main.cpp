#include <iostream>
using namespace std;
 //function with input
  
int GetValueFromUser(){//defines the function
int newv;
  cout<<"Hello Welcome to the Double Integer Game\n";
  cout<<"Please enter an integer";
  cin>>newv;
  return newv;
  
}
int main() {
  int number (GetValueFromUser());
  cout<<"The value is "<<number*2;
}
