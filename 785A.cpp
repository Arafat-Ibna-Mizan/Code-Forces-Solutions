#include<iostream>
using namespace std;
int main()
{
    string name;
    int n;
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>name;
     if(name == "Tetrahedron")
      sum+= 4;
        else if(name == "Cube")
            sum+= 6;
        else if(name == "Octahedron")
        sum+= 8;
        else if(name == "Dodecahedron")
        sum+= 12;
        else if(name == "Icosahedron")
        sum+= 20;


    }
    cout<< sum <<endl;

    return 0;
}
