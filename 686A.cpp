#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    int a[100];
    cin>>t;
    while(t--)
    {
     cin>>n;
     a[n];
     int j=1;
         for(int i=0;i<n;i++)
         {
             if(i==j)
             {
                 a[i]=j;
                 j=j+2;
             }
             else
                a[i]=0;
         }

     for(int i=0;i<n;i++)
        cout<<a[i]<< " ";
    }
}
