#include<stdio.h>
int main()
{
    long long int n,s;

   while(scanf("%lld",&n)!=EOF)
    {
        s=1+(n*(n+1))/2;

       if(n<0)
         break;

         printf("%lld\n",s);
    }
    return 0;
}
