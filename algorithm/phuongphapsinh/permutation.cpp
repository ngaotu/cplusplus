#include <bits/stdc++.h>
using namespace std;
// khoi tao cau hinh dau tien : 
void create(int *a,int n){
    for(int i=1;i<=n;i++){
        a[i]=i;
    } 
}
// sinh ra cau hinh tiep theo
void next_seq(int *a,int n,bool & ok){
    int i =n-1;
    // neu cso dung truoc < cso dung sau => tao ra so be nhat nhung lon hon so hien tai
    while(a[i]>a[i+1]&&i>= 1){
        i--;
    }
    sort(a+i+1,a+n+1);
    for(int j = i+1;j<=n;j++){
        if(a[j]>a[i]){
            swap(a[i],a[j]);
            break;
        }
    }
    //  cau hinh cuoi cung
    if(i==0){
        ok = true;
    }
}
void print_seq(int *a ,int n){
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main (){
    int n;
    cin>>n;
    int count =0;
    int a[n];
    create(a,n);
    bool ok = false;
    while(!ok){
        print_seq(a,n);
        next_seq(a,n,ok);
        count++;
    }
    cout<<"So hoan vi: "<<count;
    return 0;
}