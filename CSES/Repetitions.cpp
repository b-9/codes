#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long lens=1;
    long long ans=0;
    string st;
    getline(cin,st);
    for(long long i=1;i<st.length();i++)
    if(st[i]==st[i-1])
    {lens++;}
    else{ans=max(ans,lens);lens=1;}
    printf("%lld",max(ans,lens));
    return(0);
}