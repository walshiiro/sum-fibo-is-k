#include <bits/stdc++.h>
using namespace std;

int main() {
long int f[10000];
f[0]=1;
f[1]=2;

for(long i=2;i<1000;i++)
{
    f[i]=f[i-1]+f[i-2];
}
int x;
cin>>x;
cin.ignore();
long t=0,i=0;
while(t<x)
{ i++;
t+=f[i];

}
for(long j=i+1;j<44;j++)
    f[j]=0;
int j;

while(t>x)
{
    j=t-x;
    for(long i=0;i<43;i++)
        if(f[i+1]>j)
            break;
    t-=f[i];
    f[i]=0;
}
for(long i=0;i<44;i++)
    if(f[i]>0)
        cout<<f[i]<<" ";





}
