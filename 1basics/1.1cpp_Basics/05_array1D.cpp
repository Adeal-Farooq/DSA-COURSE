#include <bits/stdc++.h>
using namespace std;
int main(){
  int arr[5];
  cout << "enter array of lenght 4 : ";
  cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

  //we can also update the value of string or change the value
  // arr[3] = 16  will print 16 as a result
  // arr[3]+= 10 will update the value of sting by 10
  cout << "element at index 3 = " << arr[3];
  return 0;
}