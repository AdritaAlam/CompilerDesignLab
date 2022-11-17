#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
    return false;
}


void separator(string str){
    char vowels[100],consonents[100];
    int v=0;
    int cc=0;
    set <char> s;
    for (int it=0;it<str.size();it++){
        if (isVowel(str[it]))
        //s.insert(str[it]);
            vowels[v++] = str[it];
        else if (!isVowel(str[it]) && str[it]!=' ')
            consonents[cc++] = str[it];

    }
    cout<<"All vowels: ";
    //for(auto it = s.begin(); it!=s.end();it++)
    for (int i=0;i<v;i++)
        cout<<vowels[i];
        //cout<<*it;
    cout<<endl;

    cout<<"All consonents: ";
    for (int i=0;i<cc;i++)
        cout<<consonents[i];
    cout<<endl;
}

void count(string str){
    cout<<str<<endl;
    int vowel = 0;
    int cons = 0;

    for (int i=0;i<str.size();i++){
        if (isVowel(str[i]))
            vowel++;
        else
            cons++;
    }
    cout<<"Total Vowel: "<<vowel<<endl;
    cout<<"Total consonents: "<<cons<<endl;
}

int main(){
    string str ;//= "Mummum is the student of Computer Sceience & Engineering";
    freopen("inp2.txt","r",stdin);
    freopen("out2.txt","w",stdout);
    getline(cin,str);
    
    // //cin>>str;
    // scanf("%s",str);
    count(str);
    separator(str);


}