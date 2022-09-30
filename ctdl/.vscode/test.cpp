#include <bits/stdc++.h>
using namespace std;
#define Max 20
 int sum=0;
void GetInput(int a[][Max],int &n){
cout<<"Enter row: ";
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=2;j++){
        cout<<"Enter ";
        cin>>a[i][j];
    }
}
}
void Show(int a[][Max],int n,int& sum){
    for(int i=1;i<=n;i++){
    for(int j=1;j<=2;j++){
        cout<<a[i][j]<<" ";
        sum+=a[i][j];
    }
    cout<<"\n";
}
}

void Check(int a[][Max],int n,bool &ok){
for(int i =1;i<=n;i++){

    for(int j=1;j<=2;j++){
        
    }
}
    

}
int main (){
    bool ok=false;
int n;
int a[Max][Max];
GetInput(a,n);
Show(a,n,sum);


if(ok==true){
    cout<<"Yes";
}
    return 0;
}