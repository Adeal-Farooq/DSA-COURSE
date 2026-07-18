#include<bits/stdc++.h>
using namespace std;
void print2(int n){
  for(int i = 1; i <= n; i++){
    for(int j = n-1; j >= i; j--){
      cout << " ";
    }
    for (int k = 1; k <= i; k++){
      cout << "*";
    }
    cout << endl;
  }
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