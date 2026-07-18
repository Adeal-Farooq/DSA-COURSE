#include<bits/stdc++.h>
using namespace std;
//by using void 
// void sum(int num1, int num2){
//   cout << "sum = " << num1 + num2 << endl;
// }
// int main (){
//   int num1, num2;
//   cin >> num1 >> num2;
//   sum(num1,num2);
//   return 0;
// }


//by using int
int sum(int num1, int num2){
  int num3 = num1 + num2;
  return num3;
}

int main(int argc, char* argv[]){
  int num1 , num2;
  cin >> num1 >> num2;
  int res = sum (num1,num2);
  cout << res;
  return 0;
}