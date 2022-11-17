#include<bits/stdc++.h>
using namespace std;


bool isIntVar(string str){
    int len = str.size();
    bool f1=false;
    bool f2 = false;
    //if(len>=1){ 
        if ((str[0]>='i' && str[0]<='n') || (str[0]>='I' && str[0]<='N'))
            f1=true;
        else  return false;//f1 = false;
    
    
    for (int i=1;i<len;i++){
        if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9'))
            f2 = true;
        else { 
            f2 = false;
            break;
            }

        }
    //}
    if ((f1 && f2) || (f1 && len==1))
        return true;
    else
        return false;
}


bool isShortIntNum(string str){
    bool inp = false;
    if (str.size()>4){
        return false;
    }
    else{
        if (str[0]>='1' && str[0]<='9')
            inp = true;
        else
            return false;
        for (int i=1;i<str.size();i++){
            if (str[i]>='0' && str[i]<='9')
                inp = true;
            else  {
                inp = false;
                break;
            }
        }
        if (inp)
            return true;
        else return false;
    }
}

bool isLongIntNum(string str){
    bool inp = false;
    if (str.size()<4)
        return false;
    else{
        if (str[0]>='1' && str[0]<='9')
            inp = true;
        else
            inp =false;
        for (int i=1;i<str.size();i++){
            if (str[i]>='0' && str[i]<='9')
                inp = true;
            else {
                inp = false;
                break;
            }
        }
        if (inp)
            return true;
        else return false;
    }
}

void lexicalAnalyzer(string str){
    if (isIntVar(str))
        cout<<"Interger variable";
    else if(isShortIntNum(str))
        cout<<"ShortInt Number";
    else if(isLongIntNum(str))
        cout<<"LongInt Number";
     else 
        cout<<"Invalid Input";
}
int main(){
    string str;
    getline(cin,str);
    lexicalAnalyzer(str);
}