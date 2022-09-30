#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
using namespace std;

struct Student
{
    string fullname;
    float mark;

};


void GetInput(Student * list,int n){
    int index = 1;
    for(Student *p= & list[0];p < & list[n];p++){
        cin.ignore();
        cout<<"\nNhap ten sinh vien "<<index<<": ";
        getline(cin,p->fullname);
        cout<<"\nNhap diem sinh vien "<<index<<": ";
        cin>>p->mark;
        index++;
    }
}
void GetOutput(Student * list,int n){
    
    cout<<"Ho va ten"<<setw(30)<<"Diem tong ket\n";
    for(Student *p= &list[0];p < &list[n];p++){
        // cout<<"\nTen sinh vien "<<index<<": "<<p->fullname;
        
        // cout<<"\nDiem "<<index<<": "<<p->mark;
       cout<<p->fullname<<setw(10)<<p->mark<<endl;
    
    }
}
 void ListMark(Student * list, int n){
    for(Student *p= &list[0];p < &list[n-1];p++){
        for(Student * q= p+1;q<&list[n];q++){
            if(p->mark>q->mark){
                Student tmp = *p;
                *p=*q;
                *q=tmp;
            }
        }
    }
 }
int main (){
    int n;
  cout<<"Nhap so luong sinh vien: ";
  cin>>n;
 Student  * list = new Student [n];
GetInput(list,n);
ListMark(list,n);
cout<<"\n\n\t==========Danh sach sinh vien==========\n";
GetOutput(list,n);
cout<<"\n\n\t=======================================";
delete[] list;
    return 0;
}