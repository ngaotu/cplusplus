#include <bits/stdc++.h>
using namespace std;

void GetInput(string ds_Sv[100], string str,int& n){
    n=0;
    do{
        cout<<"\nNhap ten sinh vien: ";
        getline(cin,str);
        if(str!=""){
        ds_Sv[n]=str;
        n++;

        }

    } while(str!="");
}
// chuan hoa ten sinh vien
string delete_Sequence( string & str){
   str=" "+str;
    int length =str.length()-1;
     for(int i =0;i<str.length();i++){
         str[i]=tolower(str[i]);
     }
     for(int i = 1;i<str.length();i++){
         if(str[i-1]==' '&& str[i]!=' '){
             str[i]=toupper(str[i]);
         }

     }
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
// void UpperName(string s){
//     for(int i =0;i<s.length();i++){
//         s[i]=toupper(s[i]);
//     }
// }
void ShowResult ( string ds_Sv[100],int n){
    for(int i =0;i<n;i++){
        delete_Sequence(ds_Sv[i]);
    cout<<"\nTen sinh vien thu "<<i+1<<" la: "<<ds_Sv[i];
}
}
void ArrangeStudent(string ds_Sv[100],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ds_Sv[i]>ds_Sv[j]){
                // doi cho 2 hoc sinh neu ten cua hs dung truoc > ten hoc sinh dung sau
                string temp = ds_Sv[i];
                ds_Sv[i]=ds_Sv[j];
                ds_Sv[j]=temp;
            }

        }
    }
}
int main (){
    string str;
    string ds_Sv[100];
    int n;
    GetInput(ds_Sv,str,n);
    ArrangeStudent(ds_Sv,n);
  ShowResult(ds_Sv,n);
    return 0;
}