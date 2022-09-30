#include <bits/stdc++.h>
using namespace std;

struct Date {
 int day;
 int month;
 int year;  
} typedef date;

struct Student {
 string name;
 string id;
 float mark;
 date birth;

} typedef SV;

void DateOfBirth(SV & sv){
    cout<<"Input date of birth: ";
    do{
        cin>>sv.birth.day;
    } while(sv.birth.day>30 || sv.birth.day<1);
     do{
        cin>>sv.birth.month;
    } while(sv.birth.month>12 || sv.birth.month<=0);
   cin>>sv.birth.year;
}
void GetInput(vector <SV> & ds_SV, int n){
  for(int i=0;i<n;i++){
      cin.ignore();
      SV student;
      cout<<"Input student name: ";
      getline(cin,student.name);
      cout<<"Input student id: ";
      getline(cin,student.id);
      DateOfBirth(student);
      cout<<"Input student mark: ";
      cin>>student.mark;
      ds_SV.push_back(student);
  }
}
void SortName(vector <SV> & ds_SV,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ds_SV.at(i).name>ds_SV.at(j).name){
                SV tmp = ds_SV.at(i);
                ds_SV.at(i)=ds_SV.at(j);
                ds_SV.at(j)=tmp;
            }
        }
    }

}
void GetStudent(SV SV){
 cout<<"\nMSV: "<<SV.id<<"\nNAME: "<<SV.name<<"\nDate Of Birth: "<<SV.birth.day<<"/"<<SV.birth.month<<"/"<<SV.birth.year<<"\nMARK: "<<SV.mark<<endl;
}
void GetOutput(vector<SV> ds_SV,int n){
    for(int i=0;i<n;i++){
       GetStudent(ds_SV.at(i));
       cout<<"\t==========================";
    }
}
void HighestMark(vector<SV>  ds_SV,int n){
    SV  highest = ds_SV.at(0) ;
    for(int i=1;i<n;i++){
       if(ds_SV.at(i).mark>highest.mark){
           highest= ds_SV.at(i);
       }
    }
    cout<<"\nStudent has highest mark : "; 
    GetStudent(highest);
}
int main (){
vector <SV> ds_SV;
int n;
cout<<"Input number of students: ";
cin>>n;
GetInput(ds_SV,n);
SortName(ds_SV,n);
GetOutput(ds_SV,n);
HighestMark(ds_SV,n);
    return 0;
}