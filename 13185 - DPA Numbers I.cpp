#include<stdio.h>
int main()
{
    int a,i,sum=0,n,j;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&a);
        for(i=1;i<a;i++)
      {
        if(a%i==0)
        {
            sum=sum+i;
        }
     }
     if(sum<a)
     printf("deficient\n");
     else if(sum==a)
        printf("perfect\n");
     else if(sum>a)
        printf("abundant\n");
     sum=0;
    }
    return 0;
}
