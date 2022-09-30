#include <iostream>
#include <string>
#include <cstdlib>
#include<windows.h>
using namespace std;
// khai bao lop cha: lop xe
class Xe{
protected:
string hotennguoithue;
float sogiothue;
public:
void Nhapthongtin(){
    cin.ignore();
    cout<<"\nNhap ho ten nguoi thue: ";
    getline(cin,hotennguoithue);
     cout<<"\nNhap so gio thue: ";
    cin>>sogiothue;

}
void Xuatthongtin(){
cout<<"Ho va ten: "<<hotennguoithue<<" --- so gio muon thue: "<<sogiothue<<endl;
}

};

// khai bao lop con: XE Dap
class Xedap:public Xe{
private:

public:
float Tinhtienthuexe(){
    if(sogiothue<=1){
        return 10000*sogiothue;
    } else {
        return 10000+(sogiothue-1)*8000;
    }
}



};
// khai bao lop con: Xe May
class Xemay:public Xe{
private:
string biensoxe;
int loaixe;
public:

void Nhapthongtinxe(){
    Xe::Nhapthongtin();
   do{
cout<<"\nNhap loai xe (chi co loai 100 va 250cc) :";
cin>>loaixe;
} while(loaixe!=100&&loaixe!=250);
cin.ignore();
cout<<"\n Nhap bien so xe: ";
getline(cin,biensoxe);
}


void Xuatthongtinxe(){

    Xe::Xuatthongtin();
cout<<"---xe "<<loaixe<<" phan khoi - mang bien so  "<<biensoxe<<endl;

}

float Tinhtienxe(){
    
if(loaixe==100){
    if(sogiothue<=1){
        return 150000*sogiothue;
    }
    else {
        return (150000+(sogiothue-1)*100000);
    }
}
if(loaixe==250){
    if(sogiothue<=1){
        return 200000*sogiothue;
    }
    else {
        return (200000+(sogiothue-1)*100000);
    }
}
    
}

int Getter_loaixe(){ // goi ham de lay thong tin ra ben ngoai lop
    return loaixe;
}
// void Setter(int LOAIXE){      // goi ham de sau thong tin 
//     loaixe=LOAIXE;
// }

};
// ham doi mau chu
void textcolor(int x)
{
	HANDLE mau;
	mau=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau,x);
}
// ham xuat thong tin xe
void Thongtinxe(Xedap ds_xedap[],int n,Xemay ds_xemay[],int m){
int dem=1;
cout<<"\n\t\t.DANH SACH THUE XE DAP:\n";
for(int i=0;i<n;i++){
    int tien=0;
    cout<<"\nDon thue xe cua nguoi thu "<<dem<<" la: "<<endl;
    ds_xedap[i].Xuatthongtin();
    tien=ds_xedap[i].Tinhtienthuexe();;
    cout<<"So tien thue la: "<<(size_t)tien;
    
    dem++;
}
cout<<"\n\t\t.DANH SACH THUE XE MAY:\n";
for(int i=0;i<m;i++){
    int tien=0;
    cout<<"\nDon thue xe cua nguoi thu "<<dem<<" la: "<<endl;
   ds_xemay[i].Xuatthongtinxe();
   tien= ds_xemay[i].Tinhtienxe();
   cout<<"So tien thue la: "<<(size_t)tien;
  
    dem++;
}
}
 // ham tinh tong tien thue xe
 void Tongtienthuexe(Xedap ds_xedap[],int n,Xemay ds_xemay[],int m){
double sum=0;

for(int i=0;i<n;i++){
    sum+=ds_xedap[i].Tinhtienthuexe();
}
for(int i=0;i<m;i++){
   sum+= ds_xemay[i].Tinhtienxe();
}
cout<<"\n\t\tTong tien thue xe la: "<<(size_t)sum;
}
// ham xuat ra xe dap

void Xuatxedap(Xedap ds_xedap[], int n){
    
 int dem=1;
cout<<"\n\t\t.DANH SACH THUE XE DAP:\n";
for(int i=0;i<n;i++){
    int tien=0;
    cout<<"\nDon thue xe cua nguoi thu "<<dem<<" la: "<<endl;
    ds_xedap[i].Xuatthongtin();
    tien=ds_xedap[i].Tinhtienthuexe();
    cout<<"So tien thue la: "<<(size_t)tien;
    
    dem++;
}
}
// ham xuat tien xe may 250 cc
void Xemay_250(Xemay ds_xemay[],int m){
    double sum=0;
    for(int j=0;j<m;j++){
        if(ds_xemay[j].Getter_loaixe()==250){
   sum+=ds_xemay[j].Tinhtienxe();}
}
cout<<"\n\t\tTong tien thue xe la: "<<(size_t)sum;
}



// ham quan ly cac loai xe

void    Menu(Xedap ds_xedap[],int& n,Xemay ds_xemay[],int& m){
int luachon;

while (true){
textcolor(3); // mau xanh
cout<<"\n\n\n\t\t========QUAN LY XE========";
cout<<"\t\n1.Nhap danh sach cac thong tin thue xe dap va xe may";
cout<<"\t\n2.Xuat danh sach cac thong tin thue xe dap va xe may";
cout<<"\t\n3.Tong so tien cho  thue xe dap va xe may";
cout<<"\t\n4.Xuat thong tin lien quan den viec cho thue xe dap";
cout<<"\t\n5.Tinh tong so tien cho thue xe may loai 250 phan khoi";
cout<<"\t\n6.Ketthuc";
cout<<"\n\t\t==========KET THUC==========";
cout<<"\n\n\nnhap lua chon cua ban: ";
cin>>luachon;
if(luachon==1){
    system("cls");
      
int choose;
while(true){
    textcolor(6);
cout<<"\n1. Xe may";
cout<<"\n2. Xe dap"; 
cout<<"\n3. Ketthuc";
cout<<"\nYeu cau cua ban: ";
cin>>choose;
if(choose==1){
   
    cout<<"\nNguoi thu "<<m+1<<" thue xe may la: ";
Xemay x;
x.Nhapthongtinxe();
ds_xemay[m]=x;
m++;
}
if(choose==2){
    Xedap x;
    cout<<"\nNguoi thu "<<n+1<<" thue xe dap la: ";
x.Nhapthongtin();
ds_xedap[n]=x;
n++;
}
if(choose==3){
    system("cls");
break;
}
}
}
if(luachon==2){
    textcolor(15);
    system("cls"); // xoa man hinh console
Thongtinxe(ds_xedap,n,ds_xemay,m);
}
if(luachon==3){
    textcolor(15);
Tongtienthuexe(ds_xedap,n,ds_xemay,m);
}
if(luachon==4){
    textcolor(15);
    Xuatxedap(ds_xedap,n);
}
 if(luachon==5){
     textcolor(15);
     Xemay_250(ds_xemay,m);
 }

if(luachon==6){
    break;
}

}
    }
int main()
{
Xedap ds_xedap[50];
int n=0;
Xemay ds_xemay[50];
int m=0;
/*Xemay a1;
a1.Nhapthongtinxe();
cout<<"\nTien thue xe:"<<(size_t)a1.Tinhtienxe();
Xedap a2;
a2.Nhapthongtin();
cout<<"\nTien thue xe:"<<(size_t)a2.Tinhtienthuexe();*/
Menu(ds_xedap,n,ds_xemay,m);
system("pause");
    return 0;
}