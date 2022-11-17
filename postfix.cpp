#include<bits/stdc++.h>
using namespace std;

int prec (char c){
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}


void infixToPostfix(string s){
    stack<char> st;
    string result;
    for (int i=0;i<s.length();i++){
        char c = s[i];
        //cout<<"Hi"<<endl;

        //operand
        if ((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9'))
            result+=c;
        //   ( 
        else if (c == '('){
            st.push(c);
        }
        //    )
        else if (c == ')'){
            while (st.top()!='('){
                result+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while (!st.empty() && prec(s[i]) <=prec(st.top())){     //higher precedence at stack : add hp to result and then pop hp tjen push lower precedence 
                result+=st.top();
                st.pop();
            }
            st.push(c);
        }
        }
        while(!st.empty()){
            result+=st.top();
            st.pop();
        }
        cout<<result<<endl;
        //cout<<"Hi"<<endl;
    }


int main(){
    //cout<<"hiiiiiiihgZxhjv"<<endl;
    string exp ;//="a+b*(c^d-e)^(f+g*h)-i";
    cin>>exp;
    infixToPostfix(exp);
}