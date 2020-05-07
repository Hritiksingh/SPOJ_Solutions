#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    bool flag=true;
    int n,ele,sum,stps,diff;
    while(flag){
            cin>>n;
            if(n==-1){
                flag=false;
            }
            else{
                if(n>=1 && n<=10000){
                sum=0,diff=0,stps=0;
                int array[n];
                for(int i=0;i<n;++i){
                    cin>>ele;
                    array[i]=ele;
                    sum+=ele;
                }
                if(sum%n!=0){
                    cout<<-1<<"\n";
                }
                else{
                    diff=sum/n;
                    for(int i=0;i<n;++i){
                        if(diff-array[i]>0){
                            stps+=diff-array[i];
                        }
                    }
                    cout<<stps<<"\n";
                }
            }

        }

    }
    return 0;
}
