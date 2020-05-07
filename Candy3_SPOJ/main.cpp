#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll tc;
    cin>>tc;
    for(ll i=0;i<tc;++i){
        ll res=0,s,n;
        cin>>s;
        for(ll j=0;j<s;++j){
            cin>>n;
            res=((res%s)+(n%s))%s;
        }
        if(res%s==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
