#include <bits/stdc++.h>
using namespace std;
// chuyen he thap phan sang he nhi phan
int main (){
    stack <int> stk;
    int n;
    cin>>n;
    while(n!=0){
        stk.push(n%2);
        n/=2;
    }
    while(!stk.empty()){
        cout<<stk.top();
        stk.pop();
    }
    return 0;
}