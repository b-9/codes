#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i;
    cin>>i;
    long long int ans=1;
    while(i--)
    ans = (2 * ans) % (1000000000 + 7);
    cout<<ans;

}