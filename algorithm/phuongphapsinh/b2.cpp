#include <bits/stdc++.h>
using namespace std;
// in ra tat ca xau ab co do dai n
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
void print(char s[],int n){
    for(int i =1;i<=n;i++){
        cout<<s[i];
    }
    cout<<endl;
}
int main (){
    int n;
    cin>>n;
    bool ok = false;
    char s[n];
    create(s,n);
    while(!ok){
    print(s,n);
    next_seq(s,n,ok);

    }
    return 0;
}