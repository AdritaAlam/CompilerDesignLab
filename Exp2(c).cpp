#include<bits/stdc++.h>
using namespace std;


bool isVowel(char c){
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
    return false;
}

bool isVowel2(string w){
    if (isVowel(w[0]))
        return true;
    else 
        return false;
}


void separator(string str){
    string letter;
    vector <string> words;
    string v,c;

    for (int i=0;i<str.size();i++){
        if (str[i]!=' '){
            letter+=str[i];
        }
        else{
            words.push_back(letter);
            letter.clear();
        }
    }
    words.push_back(letter);


    for (int i=0;i<words.size();i++){
        if (isVowel2(words[i]))
            v+=words[i];
        else c+=words[i];
    }

    cout<<v<<endl;
    cout<<c<<endl;


}


int main(){
    string str;
    getline(cin,str);
    separator(str);

}