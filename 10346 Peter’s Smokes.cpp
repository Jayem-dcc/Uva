#include<stdio.h>
int main()
{
    int n,k,v=0,t,r=0,u;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        r=n;
        t=u=0;
        while(n>=k)
        {
            v=n%k;
            u=n/k;
            t=t+u;
            n=v+u;
        }
        printf("%d\n",r+t);
    }
    return 0;
}
