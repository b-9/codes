#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int ans = 0;
    int i = 0;
    while (n / pow(5, i))
    {
        i++;
        ans += n / pow(5, i);
    }
    cout << ans;
    return (0);
}
