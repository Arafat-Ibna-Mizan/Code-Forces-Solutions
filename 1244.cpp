#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,d,k,i;
    int x=0,y=0,z=0;

    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c>>d>>k;
        if(a<c)
        {
            x=1;
        }
        if(a>c && a<2*c)
        x=(a/(c/2));
        if(a>=2*c)
        {
            x=a/c;
            int w=a%c;
            if(w>0)
            {
                x=x+1;
            }
        }
        if(b<d)
        {
            y=1;

        }
        else{
        y=(b/d);
        z=b%d;
        if(z>0 )
        {
            y+=1;
        }
        }

        if(x+y<=k)
        {
            cout << x <<" "<<y<<endl;
        }
        else
            cout << "-1"<<endl;

    }

}
