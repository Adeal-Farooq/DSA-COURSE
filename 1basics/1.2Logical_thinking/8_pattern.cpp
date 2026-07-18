#include<bits/stdc++.h>
using namespace std;
void print2(int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < i ; j++){
      cout << " ";
    }
    for (int k = i; k < n*2 -i-1; k++){
      cout << "*";
    }
    for(int j = 0; j < i ; j++){
      cout << " ";
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