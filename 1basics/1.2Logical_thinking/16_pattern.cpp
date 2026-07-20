#include <iostream>
using namespace std;
void print16(int n){
  int ch = 65;
  for(int i=0; i<n; i++){
    for(int j = 0; j <= i; j++){
      cout << char(ch);
    }
    ch++;
    cout << endl;
  }
}
int main(){
  int t;
  cin >> t;
  for (int i =0 ; i < t; i++){
    int n;
    cin >> n;
    print16(n);
  }
}