#include<iostream>
using namespace std;
  int main()
{
   int a;
cout<<"Enter a number: "<<endl;
cin>> a;
  if(a%5 == 0 && a%11 == 0){
  cout<<"this number is divisible by both 5 and 11"<<endl;
  }
 else{
  cout<<"this number cant divisible by both numbers"<<endl; 
  }
    
return 0;
}
