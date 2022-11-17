#include <bits/stdc++.h>
using namespace std;

void checking(string str){
    vector <string> PN = {"Sagor","Selim","Salma","Nipu"};
    vector <string> P = {"he","she","I","we","you","they"};
    vector <string> N = {"book","cow","dog","home","grass","rice","mango"};
    vector <string> V = {"read","eat","take","run","write"};

    string letter;
    vector <string> words;

    bool pn = false;
    bool p = false;
    bool n = false;
    bool v = false;

    for (int i=0;i<str.size();i++){
        if (str[i]!=' ')
            letter+=str[i];
        else
        {
            words.push_back(letter);
            letter.clear();
        }
    }
    words.push_back(letter);

    // for (int i=0;i<words.size();i++){
    //     cout<<words[i]<<endl;
    // }

    if (words.size()>3){
        cout<<"Invalid Input"<<endl;
        return;
    }
    else{
        // for (int i=0;i<words.size();i++){
        //     cout<<words[i]<<" ";
        // }
        for (int i=0;i<PN.size();i++){
            if(words[0] == PN[i]){
                pn = true;
                break;
            }
        }
         for (int i=0;i<P.size();i++){
            if(words[0] == P[i]){
                p = true;
                break;
            }
        }
        if (p || pn){
            for (int i=0;i<V.size();i++){
                if(words[1] == V[i]){
                    v = true;
                    break;
                }
            }
            if (words.size()==3){
                for (int i=0;i<N.size();i++){
                    if(words[2] == N[i]){
                        n = true;
                        break;
                    }
                }
            }
            if ((v && words.size()==2) || (v && n && words.size()==3)){
                cout<<"Valid Input"<<endl;
                return;
            }
            cout<<"Invalid Input"<<endl;
        }
    }
}


int main(){
    string str;
    getline(cin,str);
    checking(str);
}