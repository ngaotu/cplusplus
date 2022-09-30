#include <bits/stdc++.h>
using namespace std;
  struct Student{
   string name;
   int year;
  };
  void GetInput(Student & s){
   cout<<"Input student name: ";
   getline(cin,s.name);
   
   cout<<"Input date of birth (year): ";
   cin>>s.year; 
  
  }
  void GetOutput(Student s){
      cout<<"Name: "<<s.name<<endl;
      
      cout<<"Date: "<<s.year<<endl;
  }

  void GetListStudent(Student * ds,int & n){
      Student s;
      n=0;
      do{
         GetInput(s);
        if(s.name!=""){
           ds[n]=s;
           n++;
        }
         cin.ignore();

      } while( s.name!="");
  }
  void ShowList(Student * ds, int n){
      for(int i=0;i<n;i++){
         
          GetOutput(ds[i]);
      }

  }
  void ShowOldestStudent(Student *ds,int n){
      cout<<"Oldest student in the list: \n";
      Student old = ds[0];
      for(int i=1;i<n;i++){
       if(old.year>ds[i].year){
           old = ds[i];
       }
      }
      GetOutput(old);
  }
int main (){
  Student ds[100] ;
  int n;
  
  GetListStudent(ds,n);
  ShowList(ds,n);
  ShowOldestStudent(ds,n);
    return 0;
}