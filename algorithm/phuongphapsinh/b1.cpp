#include <bits/stdc++.h>
using namespace std;
// nhap vao 1 xau nhi phan => in ra xau nhi phan tiep theo
void next_seq(string s){
    int n = s.length();
    int a[n];
    for(int i =1;i<=n;i++){
        a[i]=s[i-1]-'0';
    }
    int i = n;
    while(i>=1&&a[i]==1){
        a[i]=0;
        i--;
    }
    a[i]+=1;
    for(int i =1;i<=n;i++){
        cout<<a[i];
    }
}

int main (){
    string s;
    cin>>s;
    next_seq(s);
    return 0;
}