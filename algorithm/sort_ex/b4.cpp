#include <bits/stdc++.h>
using namespace std;
// dem so lit sua vat duoc toi da
// cho n con bo a1,a2,...an neu vat sua 1 con bo thi nhung con bo con lai se bi giam di 1 lit sua
int cmp(int a,int b){
    return a>=b;
}
int main (){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum =0;
    sort(a,a+n,cmp);
    for(int i =0;i<n;i++){
        sum +=a[i]-i;
    }
    cout<<"so lit sua vat duoc: "<<sum;
    return 0;
}