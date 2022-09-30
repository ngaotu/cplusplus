#include <bits/stdc++.h>
using namespace std;
int Part(int m ,int n){
    if((m==0)){
        return 1;
    }
    if(n==0){
        return 0;
    }
    else if(m<n){
        return Part(m,m);
    }
    else {
        return Part(m,n-1)+Part(m-n,n);
    }
}
int main (){
    int m,n;
    cin>>m>>n;
    cout<<Part(m,n);
}