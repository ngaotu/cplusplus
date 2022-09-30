#include <iostream>
#include <cstring>
#include <cmath>
#include <fstream>
using namespace std;
//lop ngay sinh
class Date{
private:
int day,month,year;
public:
Date(){

}
~Date(){

}
void Date_Infor(){
    do{
    cout<<"Ngay: ";
    cin>>day;
    } while(day<0||day>31);
    do{
    cout<<"Thang: ";
    cin>>month;} while(month<0||month>12);
    do{
    cout<<"Nam: ";
    cin>>year;} while(year<0);

}
void Date_of_Birth(){

    cout<<day<<"//"<<month<<"//"<<year;
}
};

class Students{
  
private:
string name;
string id;
int age;
string address;
float algebra,physical,phylosophy;
double gpa;
Date birthday;
public:

Students(){

}
~Students(){

}
// void GetInput(ifstream &filein){
//   if(filein.fail()==true){
//     cout<<"File khong ton tai";
//   }
//   else {
//     cout<<"Ton tai\n";
//   }
//   filein.open("sinhvien.text",ios::in);
//   getline(filein,name,',');

// }

void Getinput_Infor(){
   cout<<"Ho va ten: ";
    getline(cin,name);
    cout<<"Ma sinh vien: ";
     getline(cin,id);
    cout<<"Tuoi: ";
    cin>>age;
   cin.ignore();
    cout<<"Dia chi: ";
   getline(cin,address);
   cout<<"Ngay sinh:";
  birthday.Date_Infor();
   do{
         cout<<"Diem dai so: ";
     cin>>algebra;
   } while(algebra<0||algebra>10);
   do{
     cout<<"Diem vat ly: ";
    cin>>physical;
  } while(physical<0||physical>10);
   do{
     cout<<"Diem triet hoc: ";
     cin>>phylosophy;
  } while(phylosophy<0||phylosophy>10);
 };
 void Getoutput_Infor(){
     cout<<"MSV: "<<id<<" Ho va ten: "<<name<<"--- "<<age<<" tuoi "<<endl;
     birthday.Date_of_Birth();
     cout<<" Dia chi: "<<address<<" co diem so: \n";
     cout<<"Dai so: "<<algebra<<endl;
     cout<<"Vat ly: "<<physical<<endl;
     cout<<"Triet hoc: "<<phylosophy<<endl;
 }
void Output(){
  cout<<name<<" ";
}
double GPA(){
   return  (algebra+phylosophy+physical)/3;
  
                                                             
}

};

 void Sapxep_diem(Students ds_sv[],int n){
for(int i=0;i<n;i++){
  Students temp;

  
  for(int j=i+1;j<n;j++){
  double b=ds_sv[j].GPA();
  if(ds_sv[i].GPA()<ds_sv[j].GPA()){
    
   temp=  ds_sv[i];
     ds_sv[i]=  ds_sv[j];
       ds_sv[j]=temp;
  }
}
}

}

 void Menu(Students ds_sv[],int& n){
 int choose;
 while(true){
 cout<<"\n\t\t==========Danh sach sinh vien lop BCSE K1==========";
 cout<<"\n\t1.Nhap thong tin sinh vien";
 cout<<"\n\t2.Xuat thong tin sinh vien";
 cout<<"\n\t3.Sap xep danh sach  sinh vien theo diem so";
 cout<<"\n\t4.Thoat";
 cout<<"\n\t.Nhap lua chon cua ban: ";
 cin>>choose;
  if(choose==4){
     break;
  }
 if(choose ==1 ){
     int dem=1;
     system("cls");
    cout<<"Sinh vien thu "<<dem<<"\n";
     cin.ignore();
     ds_sv[n].Getinput_Infor();
     n++;
     dem++;
 }
 if(choose==2){
     int dem=1;
     cout<<"Thong tin sinh vien thu "<<dem<<":\n";
    for(int  i = 0; i < n; i++)
     {
       ds_sv[i].Getoutput_Infor();
    
 cout<<"GPA: "<<ds_sv[i].GPA()<<endl;
 dem++;
    }
     }
    if(choose==3){
      Sapxep_diem(ds_sv,n);
      
   for(int  i = 0; i < n; i++)
    {
       ds_sv[i].Getoutput_Infor();
       ds_sv[i].GPA();
     }
     }
 }
 }


int main (){
Students ds_sv[100];
ifstream filein;
int n=0;
// a.Getinput_Infor();
// a.Getoutput_Infor();
// cout<<a.GPA();
 Menu(ds_sv,n);
Students sv;
// sv.GetInput(filein);
// sv.Output();
    return 0;
}