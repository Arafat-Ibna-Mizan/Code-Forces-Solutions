#include<bits/stdc++.h>
using namespace std;
int arr[100];
int freq[100];
int n,cnt;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        arr[n],freq[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            freq[i]=-1;
        }
    for(int i=0;i<n;i++)
    {
        cnt=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
                freq[j] = 0;
            }
        }

        if(freq[i]!=0)
        {
            freq[i]=cnt;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(freq[i]==1)
        {
           cout<<i+1<<endl;
        }
    }

    }
}
