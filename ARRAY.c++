#include <iostream>
using namespace std;
  int main()
{
  int marks[5];
  cout<< "enter all marks of marks students :";
  for(int i = 0;i < 5;i++){
    cin >>marks[i];
}
  int highest = marks[0];
   for(i=1;i<5;i++){
     if(marks[i]>highest){
          highest = marks[i];
      }
  }
  cout<<"the highest marks of all on these:"<< highest<<endl;
 return 0;
}
