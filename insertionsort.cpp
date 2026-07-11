#include<iostream>
  using namespace std;
int main()
{
  int x[5];
   cout<<"enter the lsit of array :"<<endl;
 for(int i=0;i<5;i++){
  cin>>x[i];
}
for(int i=1;i<5;i++)
{
    int key=x[i];
    int j=i-1;
    while(j>=0 && x[j]>key)
    {
        x[j+1]=x[j];
        j--;
    }
    x[j+1]=key;
}
cout<<"sorted array is :"<<endl;
for(int i=0;i<5;i++)
{
    cout<<x[i]<<" ";
}
return 0;
}
