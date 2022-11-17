#include <bits/stdc++.h>
using namespace std;

bool isChar(char c){
    if ((c>='A' && c<='Z') || (c>='a' && c<='z'))
    return true;
    return false;
}
bool isDigit(char c){
    if ((c>='0' && c<='9'))
    return true;
    return false;
}


void separator(string str){
    char letters[100],digits[100],others[100];
    // vector <string> digits;
    // vector <string> letters;
    // vector <string> others;

    //[100],letters[100],others[100];
    int l=0;
    int o=0;
    int d=0;
    for (int i=0;i<str.size();i++){
       if (isChar(str[i]) && !isDigit(str[i])) 
            //letters.push_back(str[i]);
            letters[l++]=str[i];
        if (isDigit(str[i]) && !isChar(str[i]))
            //digits.push_back(str[i]);
            digits[d++]=str[i]; 
        if(!isChar(str[i]) && !isDigit(str[i]) && (str[i] != ' '))
            others[o++] = str[i];
    }
    cout<<"All letters: ";
    for (int i=0;i<l;i++)
        cout<<letters[i];
    cout<<endl;

    cout<<"All digits: ";
    for (int i=0;i<d;i++)
        cout<<digits[i];
    cout<<endl;

    cout<<"All others characters: ";
    for (int i=0;i<o;i++)
        cout<<others[i];
    cout<<endl;


}

void count(string str){
    cout<<str<<endl;
    int word = 1;
    int letter = 0;
    int digit = 0;
    int other = 0;

    for (int i=0;i<str.size();i++){
        if (str[i] == ' ' && (isDigit(str[i+1]) || isChar(str[i+1])))
            word++;
        if (isChar(str[i]) && !isDigit(str[i]))
            letter++;
        if (isDigit(str[i]) && !isChar(str[i]))
            digit++;
        if(!isChar(str[i]) && !isDigit(str[i]) && (str[i] != ' '))
            other++;
    }
    cout<<"Total Word: "<<word<<endl;
    cout<<"Total letter: "<<letter<<endl;
    cout<<"Total digits: "<<digit<<endl;
    cout<<"Total other character: "<<other<<endl;
}

int main(){
    string str ;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    getline(cin,str);
    
    count(str);
    separator(str);


}