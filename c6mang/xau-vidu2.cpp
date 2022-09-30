#include <bits/stdc++.h>
using namespace std;
//  vieets hoa xau
int main (){
string str;
cout<<"Import sequence: ";
cin>>str;
for(int i=0;i<str.length();i++){
    if(islower(str[i])){
       str[i]=toupper(str[i]);
    }
}
cout<<"The sequence after coverting: "<<str;

    return 0;
}