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
int evencount = 0;
int oddcount = 0;
for(int i = 0; i <50; i++)
{
   if(marks[i]%2 == 0){
     evencount++;
}
   else{
  oddcount++;
}

}
   cout<<"even numbers marks count is"<<evencount<<endl;

  cout<<"odd numbers marks count is:"<<oddcount<<endl; 

  return 0;
}
