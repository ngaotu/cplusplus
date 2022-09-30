#include <bits/stdc++.h>
using namespace std;
// cho tap hop N so nguyen duong va so nguyen duong K
// dem xem co bao nhieu nhom : biet rang 2 phan tu cua moi nhom cach nhau khong qua k 
// test-case:
// 7 2
// 2 6 1 7 3 4 9 
// output: 3
int main (){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count =1;
    sort(a,a+n);
    for(int i =1;i<n;i++){
        if(a[i]-a[i-1]>k){
            count++;
        }
    }
    cout<<"So nhom co the chia la: "<<count;
    return 0;
}