#include <bits/stdc++.h>
using namespace std;

void GetInput(int *a ,int n){
    for(int i =0;i<n;i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
void GetOutput(int * a,int n ){
    for(int i =0;i<n;i++){
        cout<<a[i];
    }
}
void WriteFile(fstream & file,int *a,int n){
    file.open("Dayso.txt",ios::out);
     for(int i=0;i<n;i++){
      file<<" "<<a[i];
     }

    file.close();
}
bool SquareNum(int so){
    int tmp = sqrt(so);
    return tmp*tmp==so;
}
void ReadFile(fstream &file, fstream & fileout){
    file.open("Dayso.txt",ios::in);
    fileout.open("Chinhphuong.txt",ios::out);
    while(!file.eof()){
        int so;
        file>>so;
        if(SquareNum(so)){
                fileout<<" "<<so;
        }
    }
    file.close();
    fileout.close();
}
int main (){
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    fstream file,file2;
int * a = new int [n];
GetInput(a,n);
WriteFile(file,a,n);
ReadFile(file,file2);
    return 0;
}