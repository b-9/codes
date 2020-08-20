#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    
    cin>>n;
    if(n>=5)
    {
        printf("0\n6\n28\n96\n");
        for(long long t=5;t<=n;t++)
        printf("%lld\n",((t - 4) * (t - 4) * (t * t - 9) + 4 * (t - 4) * (t * t - 7) + 4 * (t - 4) * (t * t - 5) + 4 * (t * t - 3) + 4 * (t * t - 5) + 8 * (t * t - 4)) / 2);
    }
    else if(n==4)
    printf("0\n6\n28\n96\n");
    else if(n==3)
        printf("0\n6\n28\n");
    else if(n==2)
        printf("0\n6\n");
    else if(n==1)
        printf("0\n");

    return (0);
}