#include <bits/stdc++.h>
using namespace std;
// in ra tất cả xâu ab có độ dài là n và chứa duy nhất k kí tự a liên tiếp
void create(char s[],int n ){
    for(int i =1;i<=n;i++){
        s[i] = 'A';
    }
}
void next_seq(char s[],int n,bool & ok){
   int i =n;
   while(i>=1&&s[i]=='B'){
    s[i]='A';
    i--;
   }
   s[i]='B';
   if(i==0){
    ok = true;
   }
}
 bool check (char s[],int n,int k){
    int cnt =0;
    int len = 0;
    for(int i =1;i<=n;i++){
        if(s[i]=='A'){
            len++;
        }
        else{
            if(len >k){
                return false;
            }
            else if (len==k){
                cnt++;
            }
            len =0;

        }
    }
    if(len >k ){
            return false;
        }
        else if (len ==k){
            cnt++;
        }
    return cnt==1;
 }
void print(char s[],int n){
    for(int i =1;i<=n;i++){
        cout<<s[i];
    }
    cout<<endl;
}
int main (){
    int n,k;
    cin>>n>>k;
    bool ok = false;
    char s[n];
    create(s,n);
    while(!ok){
        if (check(s,n,k)){
            print(s,n);
        }
    next_seq(s,n,ok);
    }
    return 0;
}