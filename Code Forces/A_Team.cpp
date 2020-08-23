#include <bits/stdc++.h>
#define ll long long int
#define f(i, n) for (ll i = 0; i < n; i++)
#define F(i, k, n) for (ll i = k; i < n; i++)
#define pv(arr)           \
    for (auto i : arr)    \
        cout << i << " "; \
    cout << endl;
#define rv(arr)        \
    for (ll & i : arr) \
        cin >> i;
#define vi vector
#define sv(arr) sort(arr.begin(), arr.end());
#define rev(arr) reverse(arr.begin(), arr.end());
#define deb(x) cout << #x << " " << x << endl;
#define basic(arr, n) \
    vi<ll> arr(n);    \
    rv(arr)
#define t(n) \
    ll n;    \
    cin >> n;
#define pq priority_queue
#define uset unordered_set
#define m(arr) arr.begin(), arr.end()
using namespace std;
//f(i,n) loop with i=0 to n-1
//F(i,k,n) loop with i=k ot n-1
//sv(arr) to sort vector arr
//rev(arr) to revese vector arr
//t(n) to create n and take cin for it
//basic(arr,n) create a arr vector and take n input
// rv(arr) cin a vector
//pv(arr) print the vector

int solve()
{
    t(x)
    t(y)
    t(z)
    if(x+y+z>=2)
    return 1;
    return 0;
}

int main()
{
    ll t = 1;
    cin >> t;
    ll count=0;
    while (t--)
        count+=solve();
    cout<<count;
    return (0);
}