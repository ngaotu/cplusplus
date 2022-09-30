#include <bits/stdc++.h>
using namespace std;

int main (){
    int a,b;
    cin>>a>>b;
    int res=1;
    for(int i = 1;i<=(b/2);i++){
            res=res*a;
    }
    if (b%2==0){
        res =res*res;
    }
    else {
        res =res*res*a;
    }
    cout<<"a^b= "<<res<<endl;
    return 0;
}