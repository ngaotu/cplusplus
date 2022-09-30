#include <bits/stdc++.h>
using namespace std;
  fstream file;
  struct Student {
    string name;
    string registration;
    string falcuty;
    float mark;
  };
  void GetStudent(Student &s){
      cin.ignore();
      cout<<"Input name: ";
      getline(cin,s.name);
      cout<<"Input registration: ";
      getline(cin,s. registration);
      cout<<"Input falcuty: ";
      getline(cin,s.falcuty);
      cout<<"Input mark: ";
      cin>>s.mark;
  }
  void ShowStudent(Student s){
      cout<<"\nName: "<<s.name<<"\nRegistration: "<<s.registration<<"\nFalcuty: "<<s.falcuty<<"\nTotal mark: "<<s.mark;
      cout<<"\n\t===============";
  }
  void WriteFile(Student s, fstream & file){
      file.open("student.txt",ios::out);
      file<<"Thong tin sinh vien: \n";
      file<<s.name;
      file<<"\n";
      file<<s.mark;
      file<<"\n";
      
  }

  void GetListStudent(Student * ds, int n){
      for(int i=0;i<n;i++){
          cin.ignore();
          GetStudent(ds[i]);
      }
  }
  void ShowListStudent(Student * ds, int n){
      for(int i=0;i<n;i++){
         ShowStudent(ds[i]);
      }
  }
  void ShortList(Student * ds, int n){
      for(int i =0;i<n-1;i++){
          for(int j =i+1;j<n;j++){
              if(ds[i].mark<ds[j].mark){
                  Student tmp = ds[i];
                  ds[i]=ds[j];
                  ds[j]=tmp;
              }
          }
      }
  }
  void ShowListInformatic(Student *ds,int n){ 
      for(int i =0;i<n;i++){
          if(ds[i].falcuty=="CNTT" && ds[i].mark>22.5){
              ShowStudent(ds[i]);
          }
      }

  }
  void FindStudent(Student * ds,int n){
      Student find;
      cout<<"Input id of student who need search: ";
      cin.ignore();
      getline(cin,find.registration);
      for(int i=0;i<n;i++){
        if(find.registration==ds[i].registration){
            ShowStudent(ds[i]);
            return;
        }
      }
      cout<<"No students has this registration ";
  }
int main (){
    Student ds[100],s;
     int n;
     cout<<"Input number of student: ";
     cin>>n;
     GetStudent(s);
    //  GetListStudent(ds,n);
     WriteFile(s,file);
    //  ShortList(ds,n);
    //  ShowListStudent(ds,n);
    // ShowListInformatic(ds,n);
    // FindStudent(ds,n);
    return 0;
}