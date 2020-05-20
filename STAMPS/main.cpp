#include <bits/stdc++.h>

using namespace std;

int stamps[1002]={0};
int TotStamps=0;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int testCases;
    cin>>testCases;
    for(int i=1;i<=testCases;++i){
    int friends;
    cin>>TotStamps>>friends;
    for(int j=0;j<friends;++j){
        cin>>stamps[j];
    }
    sort(stamps,stamps+friends,greater<int>());
    for(int j=1;j<friends;++j){
        stamps[j]+=stamps[j-1];
    }
    if(stamps[friends-1]<TotStamps){
        cout<<"Scenario #"<<i<<":\nimpossible\n\n";
    }
    else{
            int counter=1;
            for(int k=0;k<friends;++k){
                if(stamps[k]<TotStamps)counter+=1;
                else{
                    break;
                }
            }
            cout<<"Scenario #"<<i<<":\n"<<counter<<"\n\n";
        }
    }

    return 0;
}
