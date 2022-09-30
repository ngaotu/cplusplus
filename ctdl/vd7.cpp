#include <iostream>
#include <string>
using namespace std;
class Students {
private:
string name,clas;
int age;
double mark;
public:
Students(string name ="0",int age=0,string clas ="0",double mark=0  );
void Nhap();
void Xuat();
};
Students:: Students(string name,int age,string clas,double mark ){
this->name=name;
this->age=age;
this->clas=clas;
this->mark=mark;
}
void::Students::Nhap(){
    cout<<"Nhap ten: ";
    getline(cin,name);
    cout<<"\n Nhap tuoi: ";
    cin>>age;
    cin.ignore();
    cout<<"\n Nhap lop: ";
    getline(cin,clas);
    cout<<"\n Nhap diem: ";
   cin>>mark;

}
void::Students::Xuat(){
    cout<<"\nTen: "<<name;
    cout<<"\nTuoi: "<<age;
    cout<<"\nLop: "<<clas;
    cout<<"\nDiem: "<<mark;
}

int main(){
Students a;
a.Nhap();
a.Xuat();

    return 0;
}