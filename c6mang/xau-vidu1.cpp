#include <bits/stdc++.h>
using namespace std;

int main (){
string str1;
cout<<"Import sequence : ";
cin>>str1;
int dem =0;
for(int i=0;i<str1.length();i++){
    if(isupper(str1[i])){
        dem++;

    }
}
    cout<<"The number of upper characters: "<<dem<<endl;

    return 0;
}