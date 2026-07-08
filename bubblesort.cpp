#include<iostream>
  using namespace std;
int main()
{
    int i;
    int j;
  int x[5];
   int n = 5;
   cout<<"enter the lsit of array :"<<endl;
 for(int i=0;i<5;i++){
  cin>>x[i];
}
 for(i=0;i < 5;i++)
  {
   for(j=0;j < n - 1;j++)
   {
    if(x[j]>x[j+1])
{
    int temp = x[j+1];
    x[j+1] = x[j];
    x[j] = temp;
}
}
}
cout<<"sorted array is :"<<endl;
for(i=0;i<n;i++)
{
    cout<<x[i]<<" ";
}
return 0;
}
