#include <bits/stdc++.h>
using namespace std;

int main (){
    stack <int> stk;
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n; i++){
        cin>>a[i];
    }
    int max_value = 0;
    int index;
    int i =0;
    while(i<n){
        if(stk.empty()||a[i]>=a[stk.top()]){
            stk.push(i);
            i++;
        }
        else {
            index = stk.top();
            stk.pop();
            if(stk.empty()){
                max_value = max(max_value,a[index]*i);
            }
            else {
                max_value = max(max_value,a[index]*(i-stk.top()-1));
            }
    }
        }
        while(!stk.empty()){
                index = stk.top();
                stk.pop();
                if(stk.empty()){
                    max_value = max(max_value,a[index]*i);
                }
                else {
                    max_value = max(max_value,a[index]*(i-stk.top()-1));
                }
            }
    
    cout<<"Dien tich hinh chu nhat lon nhat la: "<<max_value;
    return 0;
}