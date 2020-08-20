#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    if(t%2==0)
    if(t%4==0)
    {
            //yes
            cout<<"YES"<<endl;
            cout<<t/2<<endl;
            for(int i=0;i<t;i+=4)
            {
                cout<<i+1<<" "<<i+4<<" ";
            }
            cout<<endl;
            cout<<t/2<<endl;
            for(int i=0;i<t;i+=4)
            {
                cout<<i+2<<" "<<i+3<<" ";
            }
            cout<<endl;
    }
    else 
    {
        //no
        cout<<"NO";return(0);
    }
    else
    {
        if((t-1)%4==0)
        {
            //no
            cout<<"NO";return(0);
        }else 
        {
            //yes
            cout<<"YES"<<endl;
            cout<<t/2+1<<endl;
            for(long long i=0;i<t;i+=4)
            cout<<i+1<<" "<<i+2<<" ";
            cout<<endl;
            cout<<t/2<<endl;
            for (long long i = 4; i < t; i += 4)
            cout << i -1<< " " << i << " ";
            cout<<t<<" ";
            cout<<endl;
            return(0);
        }
    }
    return(0);
}