#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	int n,res=0;
	cin>>n;
	for(int i=1;i<=sqrt(n);++i){
        res+=n/i-i+1;
	}
	cout<<res;

	return 0;
}
