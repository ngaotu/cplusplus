#include <iostream>
#include <cstring>
using namespace std;
class People{
    protected:
string name;
string address;
int age;
    public:
People();
~People();
void Set();// ham truyen du lieu vao
void Get(); // ham dua du lieu ra
};
People::People(){

}
People::~People(){

}
void People::Set(){
    cin.ignore();
cout<<"Name: ";
getline(cin,name);
cout<<"Age: ";
cin>>age;
cin.ignore();
cout<<"Address: ";
getline(cin,address);
}
void People::Get(){
    
    cout<<name<<"__"<<age<<" tuoi "<<" dia chi: "<<address<<endl;
}

class Student:public People{
private:
string id;
float math,physical,chemistry;
public:
void Set();
void Get();
float GPA();
};
void Student::Set(){
    People::Set();
    cout<<"ID: ";
    getline(cin,id);
    cout<<"Mark_Math: ";
    cin>>math;
    cout<<"Mark_Physical: ";
    cin>>physical;
    cout<<"Mark_Chemistry: ";
    cin>>chemistry;

}
void Student::Get(){
    People::Get();
    cout<<"__ID: "<<id<<"__Mark_Math: "<<math<<"\n__Mark_Physical: "<<physical<<"\n__Mark_Chemistry: "<<chemistry<<endl;
}
float Student::GPA(){
    return (math+physical+chemistry)/3;
}

// tao mang  sinh vien
void Danhsach(Student ds_svien[],int& n){
    int dem=1;
cout<<"Nhap so luong sinh vien: ";
cin>>n;
for(int i=0;i<n;i++){
    ds_svien[i].Set();
}
for(int i=0;i<n;i++){
     cout<<"\nSinh vien thu "<<dem<<": ";
    ds_svien[i].Get();
    cout<<"_Diem trung binh: "<<ds_svien[i].GPA();
    dem++;
}
}


int main (){
Student ds_svien[50];
int n;
Danhsach(ds_svien,n);
return 0;
}