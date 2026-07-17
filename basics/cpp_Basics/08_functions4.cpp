#include<bits/stdc++.h>
using namespace std;

// you can declare this as max because ,max is already a build-in function 
int maxx(int num1 , int num2){
  if (num1 >= num2) return num1;
  return num2;
}
int main(){
  int num1 ,num2;
  cin >> num1 >> num2;

  int maximum = maxx(num1, num2);
  cout << maximum;
  return 0;
}
