#include<bits/stdc++.h>
using namespace std;

int func(int arr[],int a)
{
   int i,j,k;
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<a;k++)
                {
                    arr[k]=arr[k+1];
                }
                a--;
                j--;
            }
        }
    }
    for(i=0;i<a;i++)
        cout<<arr[i]<<"\t";
}
int main()
{
    int t,n;
    int arr[1000];
    cin>>t;
    for(int i=0;i<t;i++)
    {
       cin>>n;
       int k=n*2;
       arr[k];
       for(int i=0;i<n*2;i++)
       {
           cin>>arr[i];

       }
       func(arr,k);

    }
}
