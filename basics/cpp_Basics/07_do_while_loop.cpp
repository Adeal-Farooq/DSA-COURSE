#include<bits/stdc++.h>
using namespace std;
int main(){
  int i =1;
  while(i<=5){
    cout << "striver" << i << endl;
    i++;
  }

  /*// the program will go into the infinitre loop because woh hamesha check karta rahega condition ,,, jo hamesha sahi hogi 1<=5 ...aur jab output print karwana chahinge to computer freez hoga koi output nahi aayega 
  int i =1;
  while(i<=5);{
    cout << "striver" << i << endl;
    i++;
  }
  */

  //jab condition satisfy nahi hogi todirect loop se bhr aayeg aur kuch b print nahi hoga
  //  int i =2;
  // while(i<=1){
  //   cout << "striver" << i << endl;
  //   i++;
  // }



  //par ham agr yeh chahiye ki ek baar print ho agr condition satisfy b na ho .. to ham do wile use karte hai
  // int i =2;
  // do{
  //   cout << "striver" << i << endl;
  //   i++;
  // }while(i<=1);
  return 0;
}