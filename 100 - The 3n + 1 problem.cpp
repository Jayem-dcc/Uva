#include<iostream>
#include<cstdio>
using namespace std;
long long con(long long  n)
{
    if(n==1)
        return 1;
    else if(n%2==0)
    {
        return con(n/2)+1;
    }
    else
        return con(3*n+1)+1;
}
long long  cou(long long  a,long long  b)
{
    long long c=0,m=0;
    if(a>b)
       return cou(b,a);
    while(a<=b)
    {
        c=con(a);
        if(c>m)
            m=c;
        a++;
    }
    return m;
}
int main()
{
    long long  i,j;
    while(scanf("%lld%lld",&i,&j)!=EOF)
    {
        cout<<i<<" "<<j<<" "<<cou(i,j)<<endl;
    }
    return 0;
}
