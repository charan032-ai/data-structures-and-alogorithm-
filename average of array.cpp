#include<iostream>
  using namespace std;
int main()
{
  int marks [50];
  int n = 50;
   cout<<"Enter the student members:"<<endl;
 for(int i=0;i<50;i++){
  cin>>marks[i];
}
int sum = 0;

for(int i = 0; i <50; i++)
{
  sum = sum + marks[i];
}
   cout<<"summ of all student marks is"<<sum<<endl;
int average ;
 average = sum/n;
  cout<<"average of all students is:"<<average<<endl; 
  return 0;
}
