#include<bits/stdc++.h>

using namespace std;

int main()

{

vector<int> vec1;

vector<int> vec2;

vector<int>::iterator it;

vector<int>::iterator it2;

int t,n;

cin>>t;

while(t--)

{

cin>>n;

int k,l;

for(int i=0;i<n;i++)

{

cin>>k;

vec1.push_back(k);

}

for(int i=0;i<n;i++)

{

cin>>k;

vec2.push_back(k);

}

sort(vec1.begin(),vec1.end());

long long sum1=0;

for(it=vec1.begin()+1;it!=vec1.end();it++)

{

sum1+=*it-vec1[0];

}

it=vec1.end();

long long int m_vec1=vec1[n-1]-vec1[0];
sort(vec2.begin(),vec2.end());

long long sum2=0;

for(it2=vec2.begin();it2!=vec2.end();it2++)

{

sum2+=*it2-vec2[0];

}

it2=vec2.end();

long long m_vec2=vec2[n-1]-vec2[0];
long long avg;

if(m_vec1<m_vec2)

avg=m_vec1;

else

avg=m_vec2;
cout<<(sum1+sum2)-avg<<endl;

vec1.clear();

vec2.clear();

}
}
