#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long int li;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    li n;
    cin>>n;
    // Check for the bitwise and between
    //the number and number-1 if results in 0.
    if((n&(n-1))==0){
        cout<<"TAK\n";
    }
    else{
        cout<<"NIE\n";
    }

    return 0;
}
