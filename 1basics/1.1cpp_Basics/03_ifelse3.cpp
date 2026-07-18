#include<bits/stdc++.h>
using namespace std;
int main(){
  int age ;
  cout << "Enter your age : ";
  cin >> age;
  if (age < 18){
    cout << "Not Eligible for the job ";
  }
  else if (age <= 57){
    cout << "Eligible for job ";
    if (age >= 55){
      cout << ", but retirement soon";
    }
  }
  else {
    cout << "retirement time";
  }
  return 0;
}