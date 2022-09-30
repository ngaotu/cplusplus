#include <bits/stdc++.h>
using namespace std;

struct Student{
  string name;
  int age;
  float mark;
};

string chuanHoa( string & str){
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
void ShowStudent(Student s){
    s.name=chuanHoa(s.name);
    cout<<"\nTen: "<<s.name<<"\nTuoi: "<<s.age<<"\nDiem thi: "<<s.mark;
    cout<<"\n===========";
}
void GetList(Student * a, int n){
    for(int i =0;i<n;i++){
    cin.ignore();
    cout<<"Nhap ho va ten: ";
    getline(cin,a[i].name);
    cout<<"Nhap tuoi: ";
    cin>>a[i].age;
    cout<<"Nhap diem: ";
    cin>>a[i].mark;
    }
}
void ShowList(Student a[100],int n){
    for(int i =0;i<n;i++){
        ShowStudent(a[i]);

    }
}
void WriteFile(fstream & file, Student * a,int n){
      file.open("Danhsachsinhvien.txt",ios::out);
    for(int i =0;i<n;i++){
        a[i].name=chuanHoa(a[i].name);
      file<<"\n"<<a[i].name<<"\n"<<a[i].age<<"\n"<<a[i].mark<<"\n=========";
    }
    file.close();
}

int main (){
    fstream File;
    int n;
    Student a[100];
    cout<<"Nhap n: ";
    cin>>n;
    GetList(a,n);
    // ShowList(a,n);
    WriteFile(File,a,n);
    return 0;
}