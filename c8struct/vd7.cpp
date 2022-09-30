#include <bits/stdc++.h>
using namespace std;
  
  struct Student {
    string name;
    int year;
  };
  void GetStudent(Student &s){
      cout<<"Input name: ";
      getline(cin,s.name);
      
      cout<<"Input date of birth: ";
      cin>>s.year;
  }
  void ShowStudent(Student s){
      cout<<"\nName: "<<s.name<<"\nDate of birth: "<<s.year;
      cout<<"\n\t===============";
  }

  void GetListStudent(Student * ds, int n){
      for(int i=0;i<n;i++){
          cin.ignore();
          GetStudent(ds[i]);
      }
  }

  void ShortList(Student * ds, int n){
      for(int i =0;i<n-1;i++){
          for(int j =i+1;j<n;j++){
              if(ds[i].name>ds[j].name){
                  Student tmp = ds[i];
                  ds[i]=ds[j];
                  ds[j]=tmp;
              }
          }
      }
  }
  void ShowListYear(Student *ds,int n){ 
      for(int i =0;i<n;i++){
          if(ds[i].year==1990){
              ShowStudent(ds[i]);
          }
      }

  }
  void FindStudent(Student * ds,int n){
      Student find;
      cout<<"\nInput name of student who need search: ";
      cin.ignore();
      getline(cin,find.name);
      for(int i=0;i<n;i++){
        if(find.name==ds[i].name){
            cout<<ds[i].year;
            return;
        }
      }
      cout<<"No students has this date of birth ";
  }
int main (){
    Student ds[100];
     int n;
     cout<<"Input number of student: ";
     cin>>n;
     GetListStudent(ds,n);
    ShowListYear(ds,n);
    FindStudent(ds,n);
     ShortList(ds,n);
    return 0;
}