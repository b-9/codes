#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, maxi, ans=0, temp;
    scanf("%lld",&t);
    scanf("%lld",&maxi);
    while(--t)
    {
        scanf("%lld",&temp);
        if(maxi<=temp)
            maxi=temp;
        else 
            ans+=maxi-temp;
    }
    printf("%lld",ans);
    return(0);
}