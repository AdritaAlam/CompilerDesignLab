#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    string str;
    cin>>str;
    int cnt = 0;

    for (int i=0;i<n;i+=2){
        if (str[i]!=str[i+1]){
            cnt++;
        }

    }
    cout<<cnt<<endl;


























    // while (n--){
    //     if (str[i]==str[i+1]){
    //         cnt++;
    //     }
    //     else{
    //         v.push_back(cnt);
    //         cnt = 1;
    //     }
    //     i++;
    // }
    // // for (int i=0;i<v.size();i++){
    // //     cout<<v[i];
    // // }
    // // cout<<endl;
    // ans=0;
    // for (int i=0;i<v.size();i++){
        
    //     if (v[i]%2 && i<v.size()-1){
    //         ans++;
    //     }
    //     else if (v[i]%2 == v[i+1]%2 && i<v.size()-1){ 
    //         ans--;
    //         i++;
    //     }
        
    // }
    //cout<<ans<<endl;
    // if (ans>=0 && v.size()>0)
    //     ans++;
    //     cout<<ans<<endl;
}


int main(){
    int t;
    cin>>t;
    while (t--)
        solve();
}