#include <bits/stdc++.h>
using namespace std;


bool isFloatVar(string str){
    int len = str.size();
    bool f1=false;
    //if(len>=1){ 
        if ((str[0]>='a' && str[0]<='h') || (str[0]>='A' && str[0]<='H') || (str[0]>='o' && str[0]<='z') || (str[0]>='O' && str[0]<='Z'))
            f1=true;
        else return false;
    //}
    bool f2 = false;
    for (int i=1;i<len;i++){
        if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9'))
            f2 = true;
        else {
            f2= false;
            break;
        }
            //f2 = false;
        }
    if (f1 && f2 || (f1 && len==1))
        return true;
    else
        return false;
}

bool isFloatNum(string str){
    int len = str.size();
    int dec = 0;
    int c=0;
    int cnt=0;
    bool f1 =  false;
    bool f2 =  false;
    bool f3 =  false;

    if (str[0] == '0') {
        if (str[1]=='.'){
            for (int i=2;i<str.size();i++){
                if (str[i]>='0' && str[i]<='9')
                    c++;
                if (c>2){
                    f1=false;
                    break;
                }
                else if (c==2) f1 =true;

            }
        }
        else f1=false;
    }
    else{
        if (str[0] >= '1' && str[0]<='9')
            f2 = true;
        for (int i=1;i<str.size();i++){
            if (str[i] >= '0' && str[i]<='9')
                f2 = true;
            else if (str[i]!='.')
                f2 = false;
            if (str[i]=='.'){
                dec = i;
                break;
            }
        }
    for (int i=dec+1;i<str.size();i++){
            if (str[i]>='0' && str[i]<='9'){
                cnt++;
            }
        }
    }
        if (f1 || (f2 && cnt<3))
            return true;
        else return false;
}


bool isDoubleNum(string str){
    bool f1 = false;
    bool f2 =false;
    int cnt =0;
    int dec =0;
    if (str.size()<5)
        return false;
    else{
        if (str[0] == '0' && str[1] == '.'){
            for (int i=2;i<str.size();i++){
                if (str[i]>='0' && str[i]<='9')
                    f1 = true;
                else f1 = false;
            }
        }
        else if (str[0] >= '1' && str[0]<='9')
            f2 = true;
        for (int i=1;i<str.size()-3;i++){
            if (str[i] >= '0' && str[i]<='9')
                f2 = true;
            else
                f2 = false;
            if (str[i]=='.'){
                dec = i;
                break;
            }
        }
        for (int i=dec+1;i<str.size();i++){
            if (str[i]>='0' && str[i]<='9'){
                cnt++;
            }
        }
        if ((cnt>3 && f2) || (f1))
            return true;
        else return false;
        
    }
}

void lexicalAnalyzer(string str){
    if (isFloatVar(str))
        cout<<"Float Variable"<<endl;
    else if (isFloatNum(str))
        cout<<"Float Number"<<endl;
    else if (isDoubleNum(str))
       cout<<"Double Number"<<endl;
    else
        cout<<"Invalid Input"<<endl;
}

int main(){
    string str;
    getline(cin,str);
    lexicalAnalyzer(str);
}