#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    scanf("%lld",&t);
    if(t==1)
    printf("1");
    else if(t<4)
    printf("NO SOLUTION");
    else 
    {
        long long even=t-1;
                
        while (even > 0)
        {
            printf("%lld ", even);
            even -= 2;
        }
        even = t;
        while (even > 0)
        {
            printf("%lld ", even);
            even -= 2;
        }
    }
    return(0);
}