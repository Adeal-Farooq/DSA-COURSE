#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[3][5];
  arr[1][3]=78;
  cout << arr[1][3];
  //for the location we dont define in the 2d array ... the system will print garbage value
  cout << "\n" << arr[1][4];
  return 0;
}