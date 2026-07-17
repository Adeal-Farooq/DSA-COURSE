#include <bits/stdc++.h>
using namespace std;

// pass by reference 
//we use pass by reference when we want to updte the value as it is when we call it in main .. when we use the call by reference it does not send the copyn of the number or the string it sends the whole meory address of that daata type  
// void dosomething (string &s){
//   s[0] = 't';
//   cout << s << endl;
// }
// int main(){
//   string s = "raj";
//   dosomething(s);
//   cout << s << endl;
//   return 0;
// }


// //same for the integer 
// void dosomething(int num){
//   cout << num << endl;
//   num +=5;
//   cout << num << endl;
//   num += 5;
//   cout << num << endl;

// }

// int main(){
//   int num =10;
//   dosomething(num);
 
//   cout << num << endl;
//   return 0;
// }


// but for arrays we do not use the & to declare it a pass by reference .. because array is by default called by reference
void dosomething (int arr[], int n){
 arr[0] += 100;
 cout << "value inside fuunction : " << arr[0] << endl;
}
int main(){
  int n = 5;
  int arr[n];

  for (int i = 0; i < n ; i++){
    cin >> arr[i];
  }
  dosomething(arr,n);
  cout << "value inside int main : " << arr[0] << endl;
  return 0;
}