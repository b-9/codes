#include<bits/stdc++.h>
using namespace std;
int main()
{
    register long long int n;
    cin>>n;
    while(1)
    {
        printf("%lld ",n);
        if (n == 1)
        return(0);
            if (n & 1)
                n = n * 3 + 1;
            else
                n /= 2;
        
    }
}