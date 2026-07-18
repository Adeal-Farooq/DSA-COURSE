#include<bits/stdc++.h>
using namespace std;
void print2(int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n - i - 1; j++){
      cout << " ";
    }
    for (int k = 0; k < 2*i+1; k++){
      cout << "*";
    }
    for(int j = 0; j < n - i - 1; j++){
      cout << " ";
    }
    cout << endl;
  }

  //or we can do by this method there are lotss of methos to do that
  // for(int i = 1; i <= n; i++){
  //   for(int j = n-1; j >= i; j--){
  //     cout << " ";
  //   }
  //   for (int k = 1; k <= 2*i-1; k++){
  //     cout << "*";
  //   }
  //   for(int j = n-1; j >= i; j--){
  //     cout << " ";
  //   }
  //   cout << endl;
  // }
}
int main(){
  int t;
  cin >> t;
  for (int i = 0; i < t; i++ ){
    int n;
    cin >> n;
    print2(n);
  }
  return 0;
}