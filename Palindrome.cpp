#include<iostream>
  using namespace std;
int main()
{
  int x[5];
   cout<<"enter the lsit of array :"<<endl;
 for(int i=0;i<5;i++){
  cin>>x[i];
}
int left = 0;
int right = 4;
   bool palindrome = true;
    
  while(left < right)
{
        if(x[left] == x[right])
        {
           palindrome = true;
           
          left++;
          right--;

        }
      else{
          palindrome = false;
          break;
}
}
if(palindrome)
{
    cout<<"palindrome"<<endl;
}
else
{
    cout<<"not palindrome"<<endl;
}
return 0;
} 
