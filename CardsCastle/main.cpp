#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ln;

ln cards[1000001]={0};
ln base[1000001]={0};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    ln ans = 2;
    for(ln i=1;i<ln(1000001);++i){
        cards[i] = ans*i + cards[i-1];
        base[i]=base[i-1]+i-1;
    }
     int tc,steps;
     cin>>tc;
     while(tc>0){
        cin>>steps;
        cout<<(cards[steps]+base[steps])%1000007<<"\n";
        --tc;
     }



    return 0;
}

 /*
    vector<ln> cards(1000001),bridge(1000001);
    ln ans=2;
    for(ln i=0;i<1000001;++i){
        cards.push_back(ans*i+)
    }
    //ln twoTopower[1000001]={0},bridge[1000001]={0},ans=2;

    for(ln i=1;i<ln(1000001);++i){
        twoTopower[i] = ans*i + twoTopower[i-1];
        bridge[i]=bridge[i-1]+i-1;

    }*/
