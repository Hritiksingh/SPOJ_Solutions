#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	int tc,x,y;
	cin>>tc;
	for(int i=0;i<tc;++i){
		cin>>x>>y;
		if(x%2==0 && y%2==0)cout<<x+y<<"\n";
		else if(x%2!=0 && y%2!=0)cout<<x+y-1<<"\n";
		else cout<<"No Number\n";
	}
	return 0;
}
