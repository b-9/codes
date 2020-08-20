#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    scanf("%lld",&n);
    register long long temp;
    register long long sum=((n+1)*(n))/2;
    while(--n)cin>>temp,sum-=temp;
    printf("%lld",sum);
    return(0);
}