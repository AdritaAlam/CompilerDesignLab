//(5*2+70)+2*(4*5)
#include <bits/stdc++.h>
using namespace std;


bool isOperator(char c){
    if (c=='+' || c=='-' || c=='*' || c=='/')
        return true;
    return false;
}

bool isDigit(char c){
    if (c>='0' && c<='9')
        return true;
    return false;
}

bool isCheck(string str){
    int len = str.size();
    stack<char> st;

    if (isOperator(str[len-1]))
        return false;
    for (int i=0;i<len-1;i++){
        if (isOperator(str[i]) && (str[i+1] == ')' || isOperator(str[i+1])))
            return false;
        else if (isDigit(str[i]) && str[i+1]=='(')
            return false;
        else if (str[i]=='(' && (str[i+1]==')' || isOperator(str[i+1])))
            return false;
        else if (str[i]==')' && (str[i+1]=='(' || isDigit(str[i+1]) || isalpha(str[i+1])))
            return false;
        else if (str[i] == '(') st.push('(');
        else if (str[i] ==')'){
            if (st.empty())
                return false;
            else
                st.pop();
        }
    }

    if (str[len-1] == '(') 
        st.push('(');
    else if (str[len-1] ==')'){
        if (st.empty())
            return false;
        else   
            st.pop();
    }
    if (st.empty())
        return true;
    else return false;
}

int main(){
    string str;
    while(getline(cin,str)){
        if (isCheck(str))
            cout<<"Valid"<<endl;
        else 
            cout<<"Invalid"<<endl;
    }
}