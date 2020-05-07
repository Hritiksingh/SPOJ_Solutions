#include <bits/stdc++.h>

using namespace std;
int mid,answer,cows,stalls;
vector<int>barn;

bool checkPos(int distance){
//cout<<"Distance : mid : "<<distance<<"\n";
int counter =1;
int last_cow_pos = barn[0];
for(int i=1;i<stalls;++i){
    if(barn[i]-last_cow_pos>=distance){
        counter+=1;
        last_cow_pos=barn[i];
        }
        if(counter==cows){
            return true;
        }
    }
return false;
}


int binary_search_on_space(int min_sep,int max_sep){
    answer=mid;
    mid = min_sep+(max_sep-min_sep)/2;

    //cout<<min_sep<<" "<<max_sep<<"\n";
    if(min_sep>=max_sep){
        //the last value to satisfy this condition is the Answer.
        //answer=mid;
        //cout<<"Last : "<<mid<<" : "<<answer<<"\n";
        return answer;
    }
    else if(checkPos(mid)){
        //max_sep=mid-1;
        //cout<<"1st : "<<mid<<"\n";
        binary_search_on_space(mid+1,max_sep);
    }
    else{
        //cout<<"2nd : "<<mid<<"\n";
        binary_search_on_space(min_sep,mid);
    }
    //return 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tc;
    cin>>tc;
    for(int i=0;i<tc;++i){
        mid=0,answer=0,cows=0,stalls=0;
        cin>>stalls>>cows;
        int cordi;
        for(int i=0;i<stalls;++i){
            cin>>cordi;
            barn.push_back(cordi);
        }
        sort(barn.begin(),barn.end());
        binary_search_on_space(0,(barn[barn.size()-1]-barn[0]));
        cout<<answer<<"\n";


    }
   return 0;
}
