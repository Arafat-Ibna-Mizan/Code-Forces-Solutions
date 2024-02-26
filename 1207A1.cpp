#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,h,c,p,q;
        scanf("%d %d %d %d %d",&n,&j,&k,&h,&c);
        if(h>c)
        {
            if(n<=2*j)
            {
                p=(n/2)*h;q=0;
            }
            else{
                p=j*h;
                n=n-2*j;
                if(n<=2*k) q=(n/2)*c;
                    else q=k*c;
            }
        }
        else{
                if(n<=2*k)
            {
                p=(n/2)*c;q=0;
            }
            else{
                p=k*c;
                n=n-2*k;
                if(n<=2*j) q=(n/2)*h;
                    else q=j*h;
            }
        }
        printf("%d\n",p+q);
    }
    return 0;
}

