#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        int dif=abs(a-b);
        if(a>b)
        {
            a-=2*dif;
            b-=dif;
        }
        else if(b>a) 
        {
            a-=dif;
            b-=2*dif;
        }
        if(a==0 and b==0)
        cout<<"YES"<<endl;
        else if(a==b and a%3==0 and b%3==0 and a>0 and b>0)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return(0);
}