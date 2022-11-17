#include <bits/stdc++.h>
using namespace std;

bool isAlpha(char s){
    if (s>='a' && s<='z' || s>='A' && s<='Z')
        return true;
    else
        return false;
}
bool isDigit(char s){
    if (s>='0' && s<='9')
        return true;
    else
        return false;
}

bool isKeyword(string str){
    vector<string> keywords ={"if","else if","else","for","while","do","and","or","true","false","int","float","double","long","bool","char","string","auto","break","continue","void"};
    for (int i=0;i<keywords.size();i++){
        if (keywords[i] == str)
            return true;
    }
            return false;
}
bool isOperator(string str){
    vector<string> operators ={"+","-","*","/","%","^"};
    for (int i=0;i<operators.size();i++){
        if (operators[i] == str)
            return true;
    }
            return false;
}
bool isIdentifier(string str){
    if ((str[0] == '_') || (isAlpha(str[0])))
            return true;
    else
            return false;
}

bool isConstant(string str){
    int len = str.size();
    if ((str[0] == '"' && str[len-1] == '"'))
        return true;
    for (int i=0;i<len;i++){
        if (!isDigit(str[i]) || (str[i]!='.'))
        return false;  
    }
}


void recognizer(string str){
    if (isKeyword(str))
        cout<<"Keyword"<<endl;
    else if (isIdentifier(str))
        cout<<"Identifier"<<endl;
    else if (isOperator(str))
        cout<<"Operator"<<endl;
    else if (isConstant(str))
        cout<<"Constant"<<endl;
    else 
        cout<<"Invalid Input"<<endl;
}

int main(){
    string str;
    getline(cin,str);
    recognizer(str);
}