#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long int li;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    /*
    -----------By observing the pattern You'll find that results are in form of an AP.
    with first term as 192 and the difference is 250;
    */
    li tc,n,a=192,d=250;
    cin>>tc;
    for(li i=0;i<tc;++i){
        cin>>n;
        cout<<a+(n-1)*d<<"\n";
    }
    return 0;
}
