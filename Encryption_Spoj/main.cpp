#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	string str;
	int n;
	while(true){
        cin>>n;
        if(n==0)break;
        cin>>str;
        for(int i=0,k=1;i<n;++i,k++){
                cout<<str[i];
                for(int j=n*2-(i+1);j<=str.length()-1;j+=n*2){
                    cout<<str[j];
                    if((j+i+k)<=(str.length()-1))cout<<str[j+i+k];
                }
        }
        cout<<"\n";
	}

	return 0;
}
/*
theresnoplacelikehomeonasnowynightx
thisistheeasyoneab
*/
