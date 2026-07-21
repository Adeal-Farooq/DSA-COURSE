#include<iostream>
using namespace std;
void print18(int n){
  for (int i = 1; i <= n; i++){
    for (int j = 65 + n - i; j < 65 +n ; j++){
      cout << char(j) << " ";
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
  }
}