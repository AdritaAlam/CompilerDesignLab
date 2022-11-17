#include <bits/stdc++.h>
using namespace std;

vector<string> tree(50,"             ");

void syntaxTree(string s);
bool isOp(char c);



void syntaxTree(string s){
    int r = 0,c=2;
    for (int i=0;s[i];i++){
        if (isOp(s[i])){
            tree[r][c] = s[i];
            tree[r+1][c-1] = '/';
            tree[r+1][c+1] = '\\';
            tree[r+2][c-2] = s[i-1];
            r+=2;
            c+=2;
        }
    }
    tree[r][c] = s.back();
}

bool isOp(char c){
    return (c =='+' || c =='*' || c=='-' || c == '\\');
}


int main(){
    string str;
    cin>>str;

    syntaxTree(str);
    cout<<"Syntax tree"<<endl;

    for (string x : tree)
        cout<<x<<endl;
}