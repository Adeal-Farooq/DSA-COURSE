#include<bits/stdc++.h>
using namespace std;
void print7(int n){
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
}
void print8(int n){
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
    print7(n);
    print8(n);
  }
  return 0;
}