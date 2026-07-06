#include<iostream>
  using namespace std;
int main()
{
  int marks [5];
   cout<<"Enter the student members:"<<endl;
 for(int i=0;i<5;i++){
  cin>>marks[i];
}
 for(int i=4;i>=0;i--){
  cout<<marks[i]<<" ";
}
  return 0;
}
