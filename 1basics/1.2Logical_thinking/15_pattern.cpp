#include<iostream>
using namespace std;
// void print14(int n){
//   for (int i = 1 ; i <= n; i++){
//     for (char ch = 'A'; ch <= 'A' + n - i; ch++){
//       cout << ch << " ";
//     }
//     cout << endl;
//   }
// }

//or just use the ASCII value
void print14(int n){
  for(int i=0; i<n; i++){
    for(int j = 65; j < n-i +65; j++){
      cout << char(j);
    }
    cout << endl;
  }
}
int main (){
  int t;
  cin >> t;
  for (int i = 0; i<t; i++){
    int n;
    cin >> n;
    print14(n);
  }
}