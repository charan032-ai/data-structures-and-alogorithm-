#include<iostream>
  using namespace std;
int main()
{
  int marks [5];
   cout<<"Enter the student members:"<<endl;
 for(int i=0;i<5;i++){
  cin>>marks[i];
}
  int target;
cout<<"enter the number that you want to search:"<<endl;
cin>>target;
   bool found = false;
    for(int i = 0; i < 5; i++)
    {
        if(marks[i] == target)
        {
           found = true;
           cout<<"your target is found at index number:"<<i<<endl;
          break;
        }

   }
 if(found == false)
    {
            cout<<"target is not found in the list"<<endl;
       }



  return 0;
} 
