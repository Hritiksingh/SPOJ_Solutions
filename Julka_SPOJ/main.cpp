#include <bits/stdc++.h>

using namespace std;


void divbyTwo(int *arr,int len,string t){
    int div2[len],div1[len],sub[len];
    for(int i=0;i<len;++i){
        div2[i]=-1;
        div1[i]=(int(t.at(i))-48);
        sub[i]=-1;
    }
    int carry=0,res=0,rem=-1;
    for(int i=0;i<=len;++i){
        if(arr[i]==-1)continue;
        if(rem!=0){
            if(rem==-1)rem=0;
            res=rem*10+arr[i];
            rem=(res)%2;
            div2[i-1]=res/2;
        }
        else{
            if(arr[i]%2==0){
            div2[i-1]=arr[i]/2;
            }else{
                div2[i-1]=((arr[i])/2);
                rem=arr[i]%2;
            }
        }


    }
    bool flag=false;
    for(int i=0;i<len;++i){
        if(div2[i]!=0){
            flag=true;
        }
        if(flag){
        cout<<div2[i];
        }
    }
    //if(!flag)cout<<0;
    cout<<"\n";
    for(int i=len-1;i>=0;--i){
        if(div1[i]<div2[i]){
            --div1[i-1];
            sub[i]=10+div1[i]-div2[i];
        }
        else{
            sub[i]=(div1[i]-div2[i]);
        }


    }
    bool flag1 = false;
    for(int i=0;i<len;++i){
        if(sub[i]!=0){
            flag1=true;
        }
        if(flag1){
        cout<<sub[i];
        }
    }
    //if(!flag1)cout<<0;
    cout<<"\n";
}

void manipulate(string t,string e){
        int arr1[110],carry=0,i;
        int diff=t.length()-e.length();
        for(int i=0;i<sizeof(arr1)/sizeof(*arr1);++i){
            arr1[i]=-1;
        }
        for(i=t.length()-1;i>=diff;--i){
            int ele = (int(t.at(i))-48)+(int(e.at(i-diff))-48)+carry;
            arr1[i+1]=(ele)%10;
            carry=ele/10;
            }
            for(int k =i;k>=0;--k){
                int ele =((int(t.at(k))-48)+carry);
                arr1[k+1]=ele%10;
                carry=ele/10;
            }
            if(carry!=0){
                arr1[0]=carry;
            }
            divbyTwo(arr1,t.length(),t);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    string t,e;
    for(int i=0;i<1;++i){
        cin>>t;
        cin>>e;
        //if(t.length()==1 && t.at(0)=='0'){cout<<"0\n"<<"0\n";continue;}
        manipulate(t,e);
    }
    return 0;
}
