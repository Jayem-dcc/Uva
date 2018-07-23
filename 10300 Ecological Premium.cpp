#include<iostream>
using namespace std;
void farm()
{
    long long int farmer,farmyard,animal,env,sum=0;
    int i;
    cin>>farmer;
    for(i=0;i<farmer;i++)
    {
        cin>>farmyard;
        cin>>animal;
        cin>>env;
        sum=sum+(farmyard*env);
    }
    cout<<sum<<endl;
    sum=0;
}
int main()
{
    int test,i;

    cin>>test;
    for(i=0;i<test;i++)
    {
        farm();
    }
    return 0;
}
