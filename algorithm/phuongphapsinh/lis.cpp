#include <bits/stdc++.h>
using namespace std;
// dynamic programming
//  day con tang dai nhat lis
// On2
int main (){
    int n;
    cin>>n;
    int a[n];
    for(int &x :a) cin>>x;
    //  khoi tao độ dài dãy con là 1
    vector <int> l(n,1);
    for(int i =0;i<n;i++){
    for(int j =0;j<i;j++){
        if(a[i]>a[j]){
            l[i] = max(l[i],l[j]+1);
        }
    }
    }
    cout<<*max_element(l.begin(),l.end());
    return 0;   
}