#include <bits/stdc++.h>

using namespace std;

int max(int a,int b, int c){
    return max(max(a,b),c);
}

int main()
{
    int tc,x,y;
    cin>>tc;
    for(int i=0;i<tc;++i){
            cin>>x>>y;
            int maxi=0;
            int dp[x+2][y+2]={};
            for(int j=1;j<=x;++j){
                for(int k=1;k<=y;++k){
                    cin>>dp[j][k];
                }
            }

            for(int l=x;l>0;--l){
                for(int m=y;m>0;--m){
                    dp[l][m] = dp[l][m] + max(dp[l+1][m],dp[l+1][m-1],dp[l+1][m+1]);
                }
            }

            for(int k=1;k<=y;++k){
                if(dp[1][k]>maxi)maxi=dp[1][k];
            }
            cout<<maxi<<"\n";

    }

    return 0;
}
