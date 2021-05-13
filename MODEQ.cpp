#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll counter=0;
        vector <ll> am(n+1,1);
        for(ll i=2;i<=n;i++)
        {
            ll a=m%i;
            counter+=am[a];
            for(ll j=a;j<=n;j+=i)
            {
                am[j]++;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
