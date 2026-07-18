#include <bits/stdc++.h>
using namespace std;
int main (){
  int marks;
  cout << "Enter your marks";
  cin >> marks;
  //this is not the correct waty to write this because if in if statement marks < 25 is checked and it does not satisfy then do not include this in the next else if condition and soo onn...
  /*if (marks < 25){
    cout << "F";
  }
  else if(marks >= 25 && marks <= 44){
    cout << "E";
  }
  else if(marks >= 45 && marks <= 49){
    cout << "D";
  }
  else if(marks >=50 && marks <=59 ){
    cout << "c";
  }
  else if(marks >= 60 && marks <= 7){
    cout << "B";
  }
  else if(marks >= 80 && marks <= 100){
    cout << "A";
    
  }*/


  // this is the correct way to write the program always think twice when u write a program
  if (marks < 25){
    cout << "F";
  }
  else if( marks <= 44){
    cout << "E";
  }
  else if( marks <= 49){
    cout << "D";
  }
  else if( marks <=59 ){
    cout << "c";
  }
  else if( marks <= 79){
    cout << "B";
  }
  else if( marks <= 100){
    cout << "A";
    
  }
  
}