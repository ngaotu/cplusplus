#include <bits/stdc++.h>
using namespace std;

struct Sv{
 string hodem;
 
 string ten;
 float toan;
 float ly;
 float hoa;
};
//==================================
void GetStudent (Sv & s){
    cin.ignore();
    cout<<"Nhap ho dem: ";
    getline(cin,s.hodem);
    cout<<"Nhap ten: ";
    cin>>s.ten;
    cout<<"Nhap diem toan: ";
    cin>>s.toan;
    cout<<"Nhap diem ly: ";
    cin>>s.ly;
    cout<<"Nhap diem hoa: ";
    cin>>s.hoa;
}
//==================================
void ShowStudent(Sv s){
    cout<<"\nSinh vien: \n"<<s.hodem<<" "<<s.ten<<"\nToan: "<<s.toan<<"\nLy: "<<s.ly<<"\nHoa: "<<s.hoa;
    cout<<"\n============";
}
//==================================
void GetList(Sv  ds[],int & n){
    do{
        cout<<"Nhap so sinh vien: ";
        cin>>n;
    } while(n<=0||n>=100);

    for(int i =0;i<n;i++){
        GetStudent(ds[i]);
        
    }
}
//==================================
float Mark(Sv s){
    float tb = (s.hoa+s.ly+s.toan)/3*1.0;
    return tb;
}
//==================================
void SelectionSort(Sv ds[],int n){
    for(int i=0;i<n-1;i++){
        int index = i;
        for(int j =i+1;j<n;j++){
            if(Mark(ds[i])<Mark(ds[j])){
                index=j;
            }
        }
        Sv tmp= ds[i];
        ds[i]= ds[index];
        ds[index]=tmp;
    }
}
//==================================
void ShowList(Sv ds[],int n){
    for(int i=0;i<n;i++){
        ShowStudent(ds[i]);
    }
}
//==================================
void WriteFile(fstream & file, Sv *ds,int n){
    file.open("DSDTBgiam.txt",ios::out);
    for(int i =0;i<n;i++){
         file<<"\nSinh vien: \n"<<ds[i].hodem<<" "<<ds[i].ten<<"\nToan: "<<ds[i].toan<<"\nLy: "<<ds[i].ly<<"\nHoa: "<<ds[i].hoa;
    file<<"\n============";
    }
}
//==================================
int main (){
    int n;
    fstream file;
 Sv ds[100];
 GetList(ds,n);
 SelectionSort(ds,n);
 ShowList(ds,n);
 WriteFile(file,ds,n);
 return 0;
}