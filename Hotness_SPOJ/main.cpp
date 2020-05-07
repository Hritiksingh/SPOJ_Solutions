#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,res,tc;
    cin>>tc;
    for(int i=0;i<tc;++i){
        int people,score;
        cin>>people;
        int array1[people],array2[people];
        for(int j=0;j<people;++j){
            cin>>score;
            array1[j]=score;
        }
        for(int j=0;j<people;++j){
            cin>>score;
            array2[j]=score;
        }
        sort(array1,array1+people);
        sort(array2,array2+people);
        int sum=0;
        for(int k=0;k<people;++k){
            sum+=(array1[k]*array2[k]);
        }
         cout<<sum<<"\n";
    }

    return 0;
}
