// nhap vao mot xau kiem tra tinh doi xung cua xau => dua ra xau dao nguoc

#include <bits/stdc++.h>
using namespace std;

int main (){
string str;
cout<<"Import sequence: ";
getline (cin, str);
string str2 = "";
bool check = true;
int length =str.length();
for(int i = 0;i<length/2;i++){
     if(str[i]!=str[length-i-1]){
          check = false;
     }
}
if(check){
   cout<<"Xau co tinh doi xung\n";
}
else { 
    cout<<"Xau khong co tinh doi xung\n";
}

//  dua ra xau dao nguoc
for (int i= str.length()-1;i>=0;i--){
    str2 += str[i];
}
cout<<"Xau dao nguoc : "<<str2<<endl;
    return 0;
}