#include<iostream>
  using namespace std;
int main()
{
  int x[5];
  int n = 5;
  int i;
   cout<<"enter the lsit of array :"<<endl;
 for(int i=0;i<5;i++){
  cin>>x[i];
}
 for(int i = 0; i < n - 1; i++)
{
    int minIndex = i;

    for(int j = i + 1; j < n; j++)
    {
        if(x[j] < x[minIndex])
        {
            minIndex = j;
        }
    }

    int temp = x[i];
    x[i] = x[minIndex];
    x[minIndex] = temp; 
}
cout<<"sorted array is :"<<endl;
for(i=0;i<n;i++)
{
    cout<<x[i]<<" ";
}
return 0;
}
