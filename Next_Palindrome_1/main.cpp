#include <bits/stdc++.h>

using namespace std;
typedef long long int li;

bool palin9(string str){
    for(li i=0;i<str.length();++i){
        if(str[i]!='9')
            return false;
    }
    return true;

}

void palinChecker(string str){
    //cout<<str<<" - ";
    int arr[str.length()];
    string res="";
    li len=str.length();
if(palin9(str)){
        res+="1";
        while(len>1){res+="0";len--;}
        res+="1";
        cout<<res<<"\n";;
    }
    else{
        for(li i=0;i<str.length();++i){
            arr[i]=int(str[i]-'0');
        }
        li size=sizeof(arr)/sizeof(*arr);
        //cout<<size;
        if(size%2==0){
            //----------even--------
            //cout<<"even\n";
            li f,e;
            e=size/2;
            f=e-1;
            //------------------checking palindrome----------------
            while(arr[f]==arr[e] && f>=0 && e<size){
                //cout<<arr[f]<<"-"<<arr[e]<<"\n";
                f--,e++;
            }
            if(f<0 && e>size-1){
                //------------number is previously palindrome--------
                li carry=1;
                for(li j=size/2-1;j>=0;--j){
                    li ele=arr[j]+carry;
                    arr[j]=ele%10;
                    carry=ele/10;
                    if(carry==0)break;
                }
                for(li k=0;k<size/2;++k){
                    arr[size-1-k]=arr[k];
                }
            }
            //-------------number is partially palindrome---------
            else if(arr[f]>arr[e]){
                //----------left > right-----------
                //cout<<"2nd";
                //cout<<arr[f]<<" "<<arr[e]<<"\n";
                for(li k=0;k<=f;++k){
                    arr[size-1-k]=arr[k];
                }
            }
            else{
                //-------------right > left----------------
                //cout<<"In";
                li carry=1;
                for(li l=size/2-1;l>=0;--l){
                    li ele = arr[l]+carry;
                    arr[l]=ele%10;
                    carry=ele/10;
                    if(carry==0)break;
                }
                for(li k=0;k<size/2;++k){
                    arr[size-1-k]=arr[k];
                }
            }
        }
        else{
            //-------------odd-----------
            //cout<<"odd\n";
            li f,e;
            e=size/2+1;
            f=size/2-1;
            while(arr[f]==arr[e] && f>=0 && e<size){
               // cout<<arr[f]<<"-"<<arr[e]<<"\n";
                f--,e++;
            }
            if(f<0 && e>size-1){
                //-------number is previously palindrome--------------
                li carry =1;
                for(li j=size/2;j>=0;--j){
                    li ele=arr[j]+carry;
                    arr[j]=ele%10;
                    carry=ele/10;
                    if(carry==0)break;
                }
                for(li k=0;k<size/2;++k){
                    arr[size-1-k]=arr[k];
                }

            }
            else if(arr[f]>arr[e]){
             //-----------number is partially palindrome-----------
             //--------------left > right------------
                    for(li k=0;k<=f;++k){
                    arr[size-1-k]=arr[k];
                }
            }
            else{
                li carry=1;
                for(li k=size/2;k>=0;--k){
                    li ele = arr[k]+carry;
                    arr[k]=ele%10;
                    carry=ele/10;
                    if(carry==0)break;
                }
                for(li l=0;l<size/2;++l){
                    arr[size-1-l]=arr[l];
                }
            }

        }
        for(li i=0;i<size;++i){
                cout<<arr[i];
            }
            cout<<"\n";


        /*for(li i=0;i<sizeof(arr)/sizeof(*arr);++i){
            cout<<arr[i]<<"-";
        }
        cout<<"\n";
        */
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    li tc,len=0;
    cin>>tc;;
    while(tc>0){
        string str;
        cin>>str;
        len=str.length();
        int arr[len];
        if(len==1 && str[0]=='0')cout<<"1\n";
        else {
            li i=0;
            while(str[i]=='0')i++;
            str.erase(0,i);
            if(str.length()==1 && str[0]!='9')cout<<(str[0]-'0'+1)<<"\n";
            else if(str.length()==1 && str[0]=='9')cout<<"11\n";
            else{
            palinChecker(str);
            }
        }
        str="";
        tc--;
}
    return 0;
}
