#include <bits/stdc++.h>
using namespace std;
// ham doc file 
void File_Input(ifstream &Filein,int a[],int& n)
{
    n=0;
Filein.open("nto.text",ios::in);
while(!Filein.eof()){  // doc den khi ket thuc file thi dung lai
Filein>>a[n];
n++;
}

Filein.close();
}

// ham kiem tra snto
bool Kiemtra_nt(int so){
    if(so<=1){
        return false;
    }
    for (int i=2;i<=sqrt(so);i++){
        if(so%i==0){
            return false;
        }
    }
    return true;
}
// ham ghi file nto
void File_Output(ofstream &fileout,int a[],int n){
fileout.open("ghi_nto.text",ios::out);
for(int i=0;i<=n;i++){
    if(Kiemtra_nt(a[i])==true){
    fileout<<a[i]<<" ";
    }
}

fileout.close();
}

int main (){
ifstream Filein;
ofstream fileout;
int a[100];
int n;
File_Input(Filein,a,n);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
File_Output(fileout,a,n);
    return 0;
}