#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

map<int, ll> mp;

ll func(int n){
    if(n==0) return 0;
    ll r=mp[n];
    if(r==0){
    r=max(ll(n),func(n/2)+func(n/3)+func(n/4));
    mp[n]=r;
    }
    return r;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n;
    while(cin>>n){
    cout<<func(n)<<"\n";
    }
    return 0;
}
