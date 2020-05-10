#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int test;
    while(true){
        cin>>test;
        if(test==0)break;
        int cars[test];
        for(int i=0;i<test;++i){
            cin>>cars[i];

        }
        bool flag=true;
        stack<int>main_street;int side=1;
        for(int j=0;j<test;++j){
            while(!main_street.empty() && main_street.top()==side){
                side+=1;
                main_street.pop();
            }
            if(cars[j]==side){
                side+=1;
            }
            else if(!main_street.empty() && main_street.top()<cars[j]){
                flag=false;
                break;
            }
            else{
                main_street.push(cars[j]);
            }
        }
        if(flag)cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}
