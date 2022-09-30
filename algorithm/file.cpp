// #include <iostream>
// #include <fstream>
#include <bits/stdc++.h> // goi tat ca thu vien chuan cua c++
using namespace std;
// ham xuat so lon nhat
void file(ofstream &fileout, int a[],int n){
    string str1="So lon nhat co the co la:";
    fileout.open("kq.text",ios::out);
 fileout<<str1<<endl;
for(int i=0;i<n;i++){
    fileout<<a[i];
}
fileout.close();
}

int main (){
    ifstream filein;
    ofstream fileout;
int n,s;
filein.open("docso.text",ios::in);
filein>>n>>s;
//cout<<" so lon nhat co "<<n<<" chu so voi tong cac chu so la "<<s;
int  a[n]={0};
int j=0;
while(s!=0){

for(int i=9;i>=0;i--){
if((s-i)>=0){
    a[j]=i;
    j++;
    s=s-i;
    break;
}
}
}

filein.close();
file(fileout,a,n);
system("pause");
    return 0;
}