#include<iostream>
#include<cstdio>
using namespace std;
void check(int,int);
void div(int n)
{
    int i,test=n,sum=0;
     for(i=1;i<test;i++)
        {
                if(test%i==0)
            {
                sum=sum+i;
            }
        }

        check(test,sum);
}
void check(int s,int t)
{
    int sum=s,test=t;
     if(sum==test)
            cout<<" "<<"PERFECT\n";
        else if(sum>test)
            cout<<" "<<"DEFICIENT\n";
        else if(sum<test)
            cout<<" "<<"ABUNDANT\n";

}
int main()
{
    int test,sum=0,i;
            cout<<"PERFECTION OUTPUT\n";
    while(1)
    {

        cin>>test;
        if(test==0)
        {
            cout<<"END OF OUTPUT\n";
            break;
        }
        printf("%5d ",test);
        div(test);
    }
    return 0;
}
