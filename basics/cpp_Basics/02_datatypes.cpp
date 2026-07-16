#include<bits/stdc++.h>
using namespace std;
int main(){
  //int
  int x = 10;

  //long
  long y = 15;

  long long z = 15000000;
  cout << "x = " << x  << " y = " <<  y << " z = "<< z ;

  //float , double
  float a = 5.6;
  float b = 5;
  cout << "\n value of a " << a << " value of b " << b  << "\n";

  //string and getline 
  //if we don't use get line it will pick the string till the  first space like " hey adeal " it will picj only hey
  // string s1;
  // cin >> s1;
  // cout << s1 << "\n";

  //for this we define two different strings 
  string s3;
  string s4;
  // string s1, s2;
  cin >> s3 >> s4;
  cout << s3 << "\n" << s4 << "\n";

  //yeh is liye use hota hai ky
  cin.ignore(numeric_limits <streamsize> :: max(), '\n');

  // but if the string is too long , we cant define string for every word  so we use getline .. it takes whole stering till its first line break .. but it can read the next line string .. but it can reaad the whole line at once
  string str;
  getline (cin, str);
  cout << str;
  // string is declared using "" double quotes
  //char is declared using '' single quotes

  //char
  char ch ;
  cin >> ch;
  cout << ch ;
  //we cam also give values to the char eg (char ch = 'g')


  return 0;
}