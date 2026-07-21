#include<iostream>
using namespace std;
void print17(int n){
  for(int i = 0;i<n; i++){
    //space
    for (int j=0 ; j<n-i; j++){
      cout << " ";
    }

    //Alphabets
    for(int j = 65; j < 65+ i; j++){
      cout << char(j);
    }
    for(int j = 65+ i; j >= 65 ; j--){
      cout << char(j);
    }

    //space
    for (int j=0 ; j<n-i; j++){
      cout << " ";
    }
    cout << endl;
  }

}
int main(){
  int t;
  cin >> t ;
  for (int i = 0;i<t ; i++){
    int n;
    cin >> n;
    print17(n);
  }
}