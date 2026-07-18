#include<bits/stdc++.h>
using namespace std;
int main(){
  //characters when addded makes up a string
  string s ="Adeal";
  int len = s.size();
  //we can also chane the value of string ata any index remember to use '' 
  s[len-1]= 'z';
  s[1] = 'b';
  cout << s[len - 1];
  cout << "\n" << s[1];
  cout << "\n" << s[2];
  return 0;
}