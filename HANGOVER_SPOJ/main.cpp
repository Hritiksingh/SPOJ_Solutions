#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    float n;
    while(true){
        float sum=0,i=2;
        cin>>n;
        //----If input is 0.00 it will end taking input.------//
        if(n==0.00)break;
        while(sum<=n){
//-----we've to only check upto that point when the sum would become greater than given input 'c'-----//
            sum+=1/i;
            i++;
            if(sum>=n)break;
        }
        cout<<i-2<<" card(s)\n";
    }


    return 0;
}
