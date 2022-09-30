#include <bits/stdc++.h>
using namespace std;
struct Name{
  string first;
  string last;
  string second;
};
void GetName(Name &name){
    cin.ignore();
    cout<<"Input first name: ";
    getline(cin,name.first);
    cout<<"Input second name: ";
    getline(cin,name.second);
    cout<<"Input last name: ";
    getline(cin,name.last);
}

struct Address{
 string commune;
 string district;
 string province;
};
void GetAddress(Address & a){
    cout<<"Input commune: ";
    getline(cin,a.commune);
    cout<<"Input district: ";
    getline(cin,a.district);
    cout<<"Input province: ";
    getline(cin,a.province);
}

struct Mark{
 float math;
 float physics;
 float chemistry;
};
void GetMark(Mark & m){
    cout<<"Input math: ";
    cin>>m.math;
    cout<<"Input physics: ";
    cin>>m.physics;
    cout<<"Input chemistry: ";
    cin>>m.chemistry;
}

  struct Student{
   Name name;
   Address address;
   string school;
   int age;
   string id;
   Mark mark;
  };
  void GetStudent(Student & sv){
      GetName(sv.name);
      GetAddress(sv.address);
      cout<<"Input school: ";
      getline(cin,sv.school);
      cout<<"Input age: ";
      cin>>sv.age;
      cin.ignore();
      cout<<"Input id number: ";
      getline(cin,sv.id);
      GetMark(sv.mark);
  }
  void ShowStudent(Student sv){
      cout<<"\nName: "<<sv.name.first<<" "<<sv.name.second<<" "<<sv.name.last;
      cout<<"\nAddress: "<<sv.address.commune<<" "<<sv.address.district<<" "<<sv.address.province;
      cout<<"\nSchool: "<<sv.school;
      cout<<"\nAge: "<<sv.age;
      cout<<"\nId: "<<sv.id;
      cout<<"\nMark: "<<"\nMath: "<<sv.mark.math<<"\nPhysics: "<<sv.mark.physics<<"\nChemistry: "<<sv.mark.chemistry;
  }
  void GetList(Student * list , int & n ){
      cout<<"Input the number of list student: ";
      cin>>n;
      Student sv;
      for(int i=0;i<n;i++){
          GetStudent(sv);
          list[i]=sv;
      }
  }
  void ShowList(Student * list, int n){
      for(int i=0;i<n;i++){
          ShowStudent(list[i]);
          cout<<"\n===================";
      }
  }
  void FailExam(Student * list, int n, float score){
      float sum;
      for(int i =0;i<n;i++){
          sum=list[i].mark.chemistry+list[i].mark.math+list[i].mark.physics;
          if(sum<score){
              ShowStudent(list[i]);
          }
      }
   }
int main (){
 int n;
//  Student list[100];
 Student * list = new Student;
 GetList(list,n);
 ShowList(list,n);
 float score;
 cout<<"Input score: ";
 cin>>score;
 FailExam(list,n,score);
    return 0;
}