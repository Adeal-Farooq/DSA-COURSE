#include<bits/stdc++.h>
using namespace std;
//write a program that take an inut of age and prints if you are adult or not
int main(){
  int age;
  cout << "Enter you age : ";
  cin >> age;
  if(age >= 18){
    cout << "You are an adult";
  }
  
  else{
    cout << "you are not an adult";
  }
  return 0;
}