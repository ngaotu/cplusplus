#include <bits/stdc++.h>
// chua lam duoc
using namespace std;
int n,l;
int a[100];
int t=1;
int temp=1;
int ok[100]={0};
string str[100]="";
void kq(){
    for(int i=1;i<=n;i++){
        cout<<a[i];
    }
    cout<<endl;
}

void binary(int i,int & t,int &temp,int ok[]){
for(int j=0;j<=1;j++){
    if(ok[temp]==0&&ok[temp+1]==0){
        a[i]=j;
        if(t<=l) {
 str[temp]+=to_string(a[i]);
t++;
        }

         else{
            temp++;
            str[temp]=str[temp]+to_string(a[i-1])+to_string(a[i]);
            t=3;
}
    
           if(str[temp]==str[temp-1]){
               ok[temp]=ok[temp-1]=1;
           } 
            
        
        
        
if(i==n){
    kq();
}
else {
    binary(i+1,t ,temp,ok);
}
//backtrack

str[temp]="";
ok[temp]=0;
t=1;
    }
}
}

int main (){
    
    do{
cout<<"Nhap n: ";
cin>>n;
cout<<"Nhap l: ";
cin>>l;
    } while(l>=n);
binary(1,t,temp,ok);
    return 0;
}