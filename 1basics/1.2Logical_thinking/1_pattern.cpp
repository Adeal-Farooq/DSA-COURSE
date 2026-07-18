#include<bits/stdc++.h>
using namespace std;

void printPattern(int n){
  for (int i = 0; i < n; i++){
    for (int j =0; j < n; j++){
      cout << "* ";// * k baad space diya karo most of the times test cases mai unhu nai space include kiya huva hota hai
    }
    cout << endl;
  }
}
int main(){
  int t ;
  cin >> t;  // t denotes no. of test cases .. because in interview coding rounds test cases should be passed .. so thay have already fed the comliler with main function with test cases  and only we have to write is function which printPattern
  for (int i = 0; i < t; i++ ){
    int n;
    cin >> n;
    printPattern(n);
  }

  return 0;
}