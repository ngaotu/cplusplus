#include <bits/stdc++.h>
using namespace std;
// cong hai so nguyen duong lon
void reserve(vector <int> & a){
    int l = 0, r = a.size()-1;
    while(l<r){
        swap(a[l],a[r]);
        l++;
        r--;
    }
 }
//  quy dinh a co so phan tu lon hon so voi b
void sum(string a,string b){
    int n1 = a.length();
    int n2 = b.length();
    int n =0;
    vector <int> sum;
    // int sum[n+1];
    for(int i =0;i<n1-n2;i++){
        b = "0"+b;
    }
    
    int rest = 0;
    
    for (int i=n1-1;i>=0;i--){
        int tmp = (a[i]-'0')+(b[i]-'0')+rest;
        rest = tmp/10;
       sum.push_back(tmp%10);
    }
    if(rest!=0){
        sum.push_back(rest);
    }
    reserve(sum);
    for(int i =0;i<sum.size();i++){
        cout<<sum[i];
    }
}


int main (){
    string a,b;
    cin>>a>>b;
    sum(a,b);
  
    return 0;
}