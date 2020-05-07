#include <bits/stdc++.h>

using namespace std;

// Function to check for precedence of the operators.
int prec(char a){
    if(a=='^' || a=='%') return 3;
    else if(a=='*' || a=='/') return 2;
    else if(a=='+' || a=='-') return 1;
    else return -1;
}

void infix_to_postfix(string s){
        stack<char> st;
        st.push('T');
        string res;
        for(int i=0;i<s.length();++i){
            // if character is an operand.
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
                res+=s[i];
            }
            // if '(' encountered then scan more for the operands.
            else if(s[i]=='('){
                        st.push('(');
                    }
            //if ')' encountered then pop out all the things in stack up till '(' encountered.

            else if(s[i]==')'){
                while(st.top()!='T' && st.top() != '('){
                        char c = st.top();
                        st.pop();
                        res+=c;
                      }
                      if(st.top()=='('){
                            char c = st.top();
                            st.pop();
                         }
                    }
                    else{
                            while(st.top()!='T' && prec(s[i])<=prec(st.top())){
                                    char c = st.top();
                                    st.pop();
                                    res+=c;
                            }
                            st.push(s[i]);
                    }
        }
        while(st.top()!='T'){
                char c = st.top();
                st.pop();
                res+=c;
              }
        cout<<res<<"\n";
    }


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tc;
    cin>>tc;
    for(int i=0;i<tc;++i){
            string s;
            cin>>s;
            infix_to_postfix(s);
    }

    return 0;
}
