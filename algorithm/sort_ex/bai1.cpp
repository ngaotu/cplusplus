#include <bits/stdc++.h>
using namespace std;
// dem so cap so bang nhau vs n<=10^5 , a[i]<=10^5
// so cap la to hop chap 2 cua n phan tu

int main (){
    int n;
    long long count =0;
    cin>>n;

    int a[n];
    map <int,long long> mp;
   
    for(int i =0;i<n;i++){
       cin>>a[i];
        mp[a[i]]++;
    }
    for(auto x: mp){

        if(x.second>1){
            count+=x.second*(x.second-1)/2;
        }
    }
    cout<<"So cap so bang nhau la: "<<count;
    return 0;
}