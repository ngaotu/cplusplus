
// chuan hoa xau
#include <bits/stdc++.h>
using namespace std;

 string delete_Sequence( string  str){

    int length =str.length()-1;
for(int i = 0;i<str.length()-1;i++){
    if(str[0]==' '){
    //  xoa tu vi tri dau tien di 1 phan tu
    str.erase(0,1);
    i--;
}
else
if(str[length]==' '){
    //  xoa tu vi tri dau tien di 1 phan tu
    str.erase(length,1);
    i--;
}
else
     if(str[i]==' ' && str[i+1]==' '){
         str.erase(i,1);
         i--;
     }
     }
return str;
 }
int main (){
string str;
cout<<"Import sequence: ";
getline (cin, str);
cout<<delete_Sequence(str);
cout<<"\n Do dai xau moi la: "<<delete_Sequence(str).length();
string str2;
cout<<"Import sequence 2: ";
getline(cin,str2);
cout<<str2.length();
    return 0;
}