#include<iostream>
using namespace std;
int main()
{
    int i,n,b,p,f,h,c;
    int s,m,d,l;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>b>>p>>f;
        cin>>h>>c;
         if(b>2*(p+f))
    {
         s=(p*h)+(f*c);
         cout<<s<<endl;
    }
   else if(b<=1)
    {
       m=0;
       cout<<m<<endl;
    }
    else{
            d=b/2;
            if(h>c && p>d){
                m=d*h;
                cout<<m<<endl;
            }
            else if(c>h && f>d){
                m=d*c;
                cout<<m<<endl;
            }
            else if(c>h &&f<d){
                m=(f*c)+(d-f)*h;
                cout<<m<<endl;
            }
            else
            {
                m=(p*h)+(d-p)*c;
                cout<<m<<endl;
            }

    }
    }


}
