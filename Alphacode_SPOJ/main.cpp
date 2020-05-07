#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;

int arr[6000];

ll recur(string num,int i,int len){
        if(i==len)return 1;
        if(arr[i]!=-1){
            cout<<arr[i]<<"\n";
            return arr[i];
        }
        if((i+2)<=len-1 && num[i+2]=='0'){
                cout<<arr[i]<<"\n";
                return arr[i] = recur(num,i+1,len);
        }
        if((i+1)<=len-1 && num[i+1]=='0'){
            return arr[i] = recur(num,i+2,len);
        }
        if((i!=len-1) && (int(num[i])-48)*10+(int(num[i+1])-48)<=26){
            return arr[i] = recur(num,i+2,len)+recur(num,i+1,len);
        }
        else{
            return arr[i] = recur(num,i+1,len);
        }

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    string num;
    while(true){
            cin>>num;
            if(num[0]=='0')break;
            for(int i=0;i<sizeof(arr);++i){
                arr[i]=-1;
            }
            cout<<recur(num,0,num.length());
    }
    return 0;

}

/*
#include<bits/stdc++.h>
#include <string>
#include <climits>

using namespace std;
int fe_dp[6000]={0};
long long int find_encodings(char num[],int i,int n){

	if(i==n)
		return 1;

	if(fe_dp[i]!=-1)
		return fe_dp[i];
	if(((i+2)<=n-1) && num[i+2]=='0')
		return fe_dp[i]=find_encodings(num,i+1,n);


	if((i+1)<=(n-1) && num[i+1]=='0')
		return fe_dp[i]=find_encodings(num,i+2,n);


	if((i!=(n-1)) && (((num[i]-'0')*10 + (num[i+1]-'0'))<=26)){
		return fe_dp[i]=find_encodings(num,i+2,n)+find_encodings(num,i+1,n);
	}
	else return fe_dp[i]=find_encodings(num,i+1,n);

}
int main(void) {
	char num[5009];
	scanf("%s",num);
	while(1){
		cout<<find_encodings(num,0,strlen(num))<<endl;
		scanf("%s",num);
		if(num[0]=='0')
			return 0;
	}
}
*/

/*
#include <bits/stdc++.h>

using namespace std;
int arr[6000];
int recur(string num,int len,int arr[]){
    for(int i=0;i<sizeof(arr);++i){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    if(len==0)return 1;
    int s = num.length()-len;
    if((int(num[s])-48)==0){
        return 0;
    }
    if(arr[len]!=-1){
        return arr[len];
    }
    int result = recur(num,len-1,arr);
    if(((int(num[s])-48)*10 +(int(num[s+1])-48))<=26){
       result+=recur(num,len-2,arr);
    }
    arr[len]=result;
    return result;
}*/

            /*if(k==0){
                return 1;
            }
            int s = (num.length())-k;
            if((int(num[s])-48)==0){
                return 0;
            }
            if(array[k]!=0){
                return array[k];
            }
            ll result = recur(num,k-1,array);
            if((int(num[0])-48)*10+(int(num[1])-48) <=26){
                result += recur(num,k-2,array);
            }
            array[k]=result;
        return result;
        */


/*int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    string num;
    while(true){
        cin>>num;
        if(num=="0")break;
        for(int i=0;i<sizeof(arr);++i){
            arr[i]=-1;        }
        cout<<recur(num,num.length(),arr)<<"\n";
    }
    return 0;
}
*/
