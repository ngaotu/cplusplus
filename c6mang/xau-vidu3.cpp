#include <bits/stdc++.h>
using namespace std;
//   dem so lan xuat hien cua tung ki tu trong xau
int main (){
string str;
cout<<"Import sequence: ";
cin>>str;
bool check[257] = {false};
int dem ;
cout<<str.size()<<" ";
for(int i =0;i<str.length();i++){
    dem=1;
    if(check[str[i]]==false){
        
    for(int j =i+1;j<str.length();j++){
        if(str[j]==str[i]){
            dem++;
        }
    }
    cout<<"\n"<<str[i]<<" xuat hien "<<dem<<" lan";
    }
    check[str[i]]=true;
}
    return 0;
}