#include <bits/stdc++.h>
using namespace std;

//vector <string> keyword={ "if","else if","else","for","while","do","and","or","signed","unsigned","true","false","int","float","double","long","struct","return","goto","bool","char","string","auto","break","continue","void" };


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
bool isCharVar(char s,char r,char t){
    if (s=='c' && r=='h' && t=='_')
        return true;
    else
        return false;
}
bool isBinVar(char s,char r,char t){
    if (s=='b' && r=='n' && t=='_')
        return true;
    else
        return false;
}
bool isBin(char s){
    if (s == '0' || s == '1')
        return true;
    else
        return false;
}

bool isRestOk(string str){
    bool f2 = false;
    bool f3 = false;
    int len = str.size();
    if (isAlpha(str[3]) || (isDigit(str[3])))
        f2 = true;
    for (int i=4;i<len;i++){
        if (isAlpha(str[i]) || isDigit(str[i]))
            f3 = true;
        else{
            f3 = false;
            break;
        }
    }
    if ((f2 && len<5) || (f2 && f3))
        return true;
    else return false;
}

bool isBinNum(string str){
    int len =str.size();
    bool f1 =false;
    bool f2 = false;
    if (str[0]=='0' && isBin(str[1]))
        f1 = true;
    for (int i=2;i<len;i++){
        if (isBin(str[i]))
            f2 = true;
        else{
            f2 = false;
            break;
        }
    }
    if ((f1 && len<3) || (f1 && f2 && len>2))
        return true;
    else 
        return false;
}


void lexicalAnalyzer(string str){
    int len = str.size();
    if (isCharVar(str[0],str[1],str[2]) && (len>=4) && (isRestOk(str)))
        cout<<"Character Variable"<<endl;
    else if (isBinVar(str[0],str[1],str[2]) && (len>=4) && (isRestOk(str)))
        cout<<"Binary Variable"<<endl;
    else if (isBinNum(str))
        cout<<"Binary Number"<<endl;
    else 
        cout<<"Invalid Input"<<endl;
}

int main(){
    string str;
    getline(cin,str);
    lexicalAnalyzer(str);
}