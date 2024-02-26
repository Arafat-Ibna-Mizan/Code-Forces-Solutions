#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int mn=*min_element(arr,arr+n);
        int mx=*max_element(arr,arr+n);
        int i;
        for(i=0;i<n;i++)
        {
            if(arr[i]==mn)
            {
                break;
            }
        }
        int m1=min(i+1,n-i);
        int j;
        for(j=0;j<n;j++)
        {
            if(arr[j]==mx)
            {
                break;
            }
        }
        int m2=min(j+1,n-j);
        int m=min(m1,m2);
        if(m1<m2)
        {
            cout<<m1+min(abs(i-j),m2)<<endl;
        }
        else
        {
            cout<<m2+min(abs(i-j),m1)<<endl;
        }
    }
}
