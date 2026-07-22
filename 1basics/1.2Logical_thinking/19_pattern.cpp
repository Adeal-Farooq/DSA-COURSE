#include<iostream>
using namespace std;
void print18(int n){
  for (int i = 1; i <= n; i++){
    for (int j =n ; j>=i; j--){
      cout << "*";
    }
    for (int j = 0 ; j< 2*(i-1); j++){
      cout << " ";
    }
    for (int j =n ; j>=i; j--){
      cout << "*";
    }
    cout << endl;
    
  }
}
void print18_1(int n){
  for (int i = 1; i <= n; i++){
    for (int j =0 ; j<i; j++){
      cout << "*";
    }
   
    for (int j = 2*(n-1) ; j>=n; j--){
      cout << " ";
    }
    for (int j =1 ; j<i; j++){
      cout << "*";
    }
    cout << endl;
  }

}
int main(){
  int t;
  cin >> t;
  for (int i = 0; i < t; i++){
    int n;
    cin >> n;
    print18(n);
    print18_1(n);
  }
}