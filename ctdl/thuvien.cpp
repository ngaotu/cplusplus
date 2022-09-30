#include <iostream>
#include <cstring>
#include <vector>
#include <windows.h>
using namespace std;
 void textcolor(int x)
 {
 	HANDLE mau;
 	mau=GetStdHandle(STD_OUTPUT_HANDLE);
 	SetConsoleTextAttribute(mau,x);
 }
 
void gotoXY (int column, int line)
{
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void vedoc(){
    int x=6;
   int y=0;
    while(y<9){
        while(x<27){
   gotoXY(x,y);
   if(x==6||x==26){
       cout<<"|";
   }
   x++;
        }
        x=6;
    y++;
    
    }
}
void vengang(){
    int x=7;
   int y=0;
    while(y<9){
        while(x<26){
   gotoXY(x,y);
   if(y==0||y==8){
       cout<<"=";
   }
   x++;
        }
        x=7;
    y++;
    
    }
}
class Docgia{
protected:
string name;
int ngay,thang,nam; // ngay lap the
int thoihan; // so thang the con su dung duoc
public:
Docgia(){

}
~Docgia(){

}
void Nhapthongtin(){
    cout<<"Nhap ten: ";
    getline(cin,name);
    cout<<"\nNgay lap the:"<<endl;
    cout<<"Ngay: ";
    cin>>ngay;
    cout<<"Thang: ";
cin>>thang;
    cout<<"Nam: ";
    cin>>nam;
    cout<<"Thoi han su dung the: ";
    cin>>thoihan;
}
void Xuatthongtin(){
   
    cout<<"\t========ThongTindocgia========";
    cout<<"\n.Ho va ten: "<<name;
    cout<<"\nNgay lap the: "<<" ngay "<<ngay<<" thang "<<thang<<" nam "<<nam;
    cout<<"\nThoi han su dung the con lai(tinh theo thang): "<<thoihan<<" thang";
}


};
// khia bao lop con: Lop tre em
class Tre_em:public Docgia{
private:
string nguoidaidien; // thong tin nguoi lam the
public:
void Nhapthongtin(){
    Docgia::Nhapthongtin();
    cin.ignore();
cout<<"Nhap ho ten nguoi dai dien: ";
getline(cin,nguoidaidien);
}
double Tinhtienthe(){
    return thoihan*5000;
}
void Xuatthongtin(){
    Docgia::Xuatthongtin();
    cout<<"\n.Nguoi dai dien: ";
    cout<<nguoidaidien;
    cout<<"\n.Tien lam the: "<<Tinhtienthe();
    
}



};

class Nguoi_Lon:public Docgia{
private:
int CMND;
public:
void Nhapthongtin(){
    Docgia::Nhapthongtin();
    cin.ignore();
cout<<"Nhap CMND: ";
cin>>CMND;
}
double Tinhtienthe(){
    return thoihan*10000;
}
void Xuatthongtin(){
    
    Docgia::Xuatthongtin();
    cout<<"\n.So CMND: ";
    cout<<CMND;
      cout<<"\n.Tien lam the: "<<Tinhtienthe();
}



};

// lop quan ly thu vien nhap xuat danh sach doc gia
class Library{
private:
vector<Tre_em> ds_docgia_tre_em;
vector<Nguoi_Lon> ds_docgia_nguoilon;
public:
Library(){

}
~Library(){

}
void Nhap(){
    int choose;
while(true){
cout<<"\n\t\t==========Quan Ly Thu Vien==========";
cout<<"\n\t1.Nhap thong tin doc gia tre em";
cout<<"\n\t2.Nhap thong tin doc gia nguoi lon";
cout<<"\n\t3.Thoat";
cout<<"\n\t\t==========Ket Thuc==========";
cout<<"\nNhap lua chon cua ban: ";
cin>>choose;
if(choose==3){
    break;
}
if(choose==1){
    system("cls");
Tre_em child;
cin.ignore();
child.Nhapthongtin();
ds_docgia_tre_em.push_back(child);
}
if(choose==2){
    system("cls");
    Nguoi_Lon adult ;
    cin.ignore();
    adult.Nhapthongtin();
    ds_docgia_nguoilon.push_back(adult);
}
}
}
void Xuat(){
    system("cls");
 int choose;
while(true){
  
cout<<"\n\t\t==========Quan Ly Thu Vien==========";
cout<<"\n\t1.Xuat thong tin doc gia tre em";
cout<<"\n\t2.Xuat thong tin doc gia nguoi lon";
cout<<"\n\t3.Thoat";
cout<<"\n\t\t==========    Ket Thuc    ==========";
cout<<"\nNhap lua chon cua ban: ";
cin>>choose;
if(choose==3){
    break;
}
if(choose==1){
    for(int i=0;i<ds_docgia_tre_em.size();i++){
        ds_docgia_tre_em.at(i).Xuatthongtin();
    }
}
if(choose==2){
    for(int i=0;i<ds_docgia_nguoilon.size();i++){
        ds_docgia_nguoilon.at(i).Xuatthongtin();
    }
}
}
}
long int Tinhtongtien(){
long int sum=0;
for(int i=0;i<ds_docgia_tre_em.size();i++){
      sum+=  ds_docgia_tre_em.at(i).Tinhtienthe();
    }
     for(int i=0;i<ds_docgia_nguoilon.size();i++){
       sum+= ds_docgia_nguoilon.at(i).Tinhtienthe();
    }
    return sum;
}
};

int main (){
Library *a= new Library;
int luachon;
while(true){
    system("cls");
    textcolor(6);
    // vedoc();
    // vengang();
    gotoXY(0,0);
cout<<"\n\tTHU VIEN X";
cout<<"\n\t1.Nhap thong tin ";
cout<<"\n\t2.Xuat thong tin ";
cout<<"\n\t3.Tinh tong tien ";
cout<<"\n\t4.Thoat ";
 cout<<"\n\t.Nhap lua chon: ";
cin>>luachon;
textcolor(7);
if(luachon==1){
    system("cls");
a->Nhap();
}
if(luachon==2){
    system("cls");
a->Xuat();
}
if(luachon==3){
       system("cls");
cout<<"\nTong tien :"<<a->Tinhtongtien();
}
if(luachon==4){
    system("cls");
    cout<<"\n\t========Cam on ban da su dung !========";
    break;
}
}
delete a;
    return 0;
}