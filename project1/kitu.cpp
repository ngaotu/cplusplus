#include <iostream>
#include <cstring>
using namespace std;

int main (){
string str1;
cout<<"Nhap chuoi: ";
getline(cin,str1);
// int dem=0;
// for(int i=0;i<str1.length();i++){
//     dem++;      // dem ki tu trong xau
//     str1[i]=str1[i]-32; // in hoa xau
// }
// cout<<"Dem ki tu: "<<dem<<endl;
// cout<<str1;
str1=str1+' ';
int dem=1;
for(int i=0;i<str1.length();i++){
    cout<<str1.at(i);

    if((str1.at(i)!=' ')&&(str1.at(i+1)==' ')){
         cout<<endl;
         dem++;
     }
}

 return 0;
}