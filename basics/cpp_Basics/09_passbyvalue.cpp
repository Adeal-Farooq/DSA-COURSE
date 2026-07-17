#include<bits/stdc++.h>
using namespace std;

//pass by value
void dosomething(int num){
  cout << num << endl;
  num +=5;
  cout << num << endl;
  num += 5;
  cout << num << endl;

}

// when we call the dosomething() copy of num is given to the this function not the actual number does not go there
int main(){
  int num =10;
  dosomething(num);

//so here there will bw no update in the num it will 10 only 
  cout << num << endl;
  return 0;





// same for the string
void dosomething (string s){
  s[0] = 't';
  cout << s << endl;
}
int main(){
  string s = "raj";
  dosomething(s);
  cout << s << endl;
  return 0;
}
}