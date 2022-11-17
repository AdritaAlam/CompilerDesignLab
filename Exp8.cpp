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
    vector<string> keywords ={"if","else if","else","for","while","do","and","or","signed","unsigned","true","false","int","float","double","long","struct","return","goto","bool","char","string","auto","break","continue","void"};
    for (int i=0;i<keywords.size();i++){
        if (keywords[i] == str)
            return true;
    }
            return false;
}
bool isArithmeticOperator(string str){
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
bool isInteger(string str){
    int len  = str.size();
    int c = 0;
    for (int i=0;i<len;i++){
        if (isDigit(str[i]))
            c++;
        else break;
    }
    if (c == len)
        return true;
    else return false;
}

bool isFloat(string str){
    int len = str.size();
    int cnt = 0;
    int d = 0;
    for (int i=0;i<len;i++){
        if (str[i]=='.')
        cnt++;
        if (isDigit(str[i]))
            d++;
        if (cnt>1)
            return false;
    }   
    if (d!=len-1)
        return false;
    else 
        return true;   
}

void recognizer(string str){
    if (isKeyword(str))
        cout<<"Keyword"<<endl;
    else if (isIdentifier(str))
        cout<<"Identifier"<<endl;
    else if (isArithmeticOperator(str))
        cout<<"Arithmetic Operator"<<endl;
    else if (isConstant(str))
        cout<<"Constant"<<endl;
    else if (isInteger(str))
        cout<<"Integer"<<endl;
    else if (isFloat(str))
        cout<<"Float"<<endl;
    else 
        cout<<"Invalid Input"<<endl;
}

int main(){
    string str;
    getline(cin,str);
    recognizer(str);
}