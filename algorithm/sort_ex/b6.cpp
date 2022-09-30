#include <bits/stdc++.h>
using namespace std;
// dem so cap so co tong bang k 
int main (){
    int n,k;
    cin>>n>>k;
    int a[n];
    
    int count =0;
    // sort(a,a+n);
    map <int,int> mp;
    for(int i =0;i<n;i++){
        cin>>a[i];
       mp[a[i]]++;
    }
    for(auto x : mp){
       if(x.first>k){
        break;
       }
       if(k-x.first==x.first){
            count+=(x.second-1)*x.second/2;
       }
       else
       if(mp[k-x.first]!=0){
        count+= x.second*mp[k-x.first];
        mp[x.first] = 0;
       }
      
    }
    cout<<"So cap so co tong bang k la: "<<count;
    return 0;
}