#include<iostream>
  using namespace std;
int main()
{
 int x[5];
  cout<<"enter the list of array of values:"<<endl;
 for(int i=0;i<5;i++){
  cin>>x[i];
}
int left = 0;
int right = 4;
int temp;
 while(left < right){
  temp = x[left];
  x[left] = x[right];
  x[right] = temp;
  left++;
  right--;
}
  cout<<"the array after final process:"<<endl;
  for(int i=0;i<5;i++){
    cout<<x[i]<<" ";
  }
  return 0;
}
 
 
