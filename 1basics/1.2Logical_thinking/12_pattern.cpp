#include <iostream>
using namespace std ;
void print11(int n){
  for (int i = 1 ; i <= n; i++){
    //numbers
    for(int j = 1; j <= i; j++){
      cout << j;
    }
    //spaces
    for(int j = 1; j<= (2*n-2*i); j++){
      cout << " ";
    }

    //numbers
    for(int j = i; j >= 1; j--){
      cout << j;
    }
    // int k = i;
    // for (int j = 1; j < i+1; j++){
      
    //   cout << k;
    //   k--;
    // }
   
    cout << endl;
  }
}

int main(){
  int t ;
  cin >> t;
  for (int i = 0; i <t ; i++){
    int n;
    cin >> n;
    print11(n);
  }
  return 0;
}