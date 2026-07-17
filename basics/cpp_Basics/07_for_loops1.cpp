#include <bits/stdc++.h>
using namespace std;
int main(){
  /*//ham nai int ko for loop k andr b declare kiya aur bhr b to woh alg alg use honge 
  int i ;
  //in this way we can print striver 4 times like striver 1 striver 2.... 
  for (int i = 1; i<=4; i++)
  {
    cout << "Striver" << "\t" << i  << endl ;
   
  }
  // for loop k bahar ham nai i mai koi value nahi diya hai upar dekho ham nai bas int i likha hai to yeh wala i hame garbage value dega par agr ham int i = "some value like 1 or 2 or 3 " dete toh woh print hota 
  cout << i << endl;
  */




  /*//ab yeh wali conndition check karo is mai ham nai int ko bas bhr declare kiya hai for loop k andr nahi to for loop bhr wale int ko lega aur usi hisab se for loop chalayega... is baaar loop k bhr wal i garbage wal vale print nahi karega but i ki vallue utni aaaye gi jitni baar i ka vlaue increment yaan decrement hoga 
  int i ;
  for ( i = 1; i<=4; i++);
  {
    cout << "Striver" << "\t" << i  << endl ;
   
  }
  
  cout << i << endl;
  */

  

  //ab yeh condition check karo is mi ham nai for loop k bhr ; lga diya hai is baar for loop nahi chalega kyunki for loop wahi khtm ho gya par ab jo ham nai for loop k andr cout likha tha woh as a new block of code dekha jayega aur woh alg se execute hoga with out for loop .. aur us mai i ka value wahi hoga joham nai golbally initialize kiya hai .... is mai ham nai i ko koi value nahi di hai to garbage value print hogi donu gjh
  int i ;
  for ( int i = 1; i<=4; i++);
  {
    cout << "Striver" << "\t" << i  << endl ;
   
  }
  
  cout << i << endl;
  return 0;
}