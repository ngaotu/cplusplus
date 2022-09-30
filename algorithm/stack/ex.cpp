#include <bits/stdc++.h>
using namespace std;

int main (){
    string s;
    cin>>s;
    map <char,int> bracket;
    int n = s.length();
        for(int i =0;i<n;i++){
            bracket[s[i]]++;
        }
        for(auto x:bracket){
            cout<<x.first<<" "<<x.second<<endl;
        }
        return 0;
}