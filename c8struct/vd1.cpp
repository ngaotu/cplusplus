#include <bits/stdc++.h>
using namespace std;

struct Student {
 string name;
 string id;
 float mark;

} typedef SV;

void GetInput(vector <SV> & ds_SV, int n){
  for(int i=0;i<n;i++){
      cin.ignore();
      SV student;
      cout<<"Input student name: ";
      getline(cin,student.name);
      cout<<"Input student id: ";
      getline(cin,student.id);
      cout<<"Input student mark: ";
      cin>>student.mark;
      ds_SV.push_back(student);
  }
}
void SortMark(vector <SV> & ds_SV,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ds_SV.at(i).mark>ds_SV.at(j).mark){
                SV tmp = ds_SV.at(i);
                ds_SV.at(i)=ds_SV.at(j);
                ds_SV.at(j)=tmp;
            }
        }
    }

}
void GetOutput(vector<SV> ds_SV,int n){
    for(int i=0;i<n;i++){
        cout<<"\nMSV: "<<ds_SV.at(i).id<<"\nNAME: "<<ds_SV.at(i).name<< "\nMARK: "<<ds_SV.at(i).mark<<endl;
        cout<<"\t==========================";
    }
}
void ShowStudentPass(vector <SV> ds_SV,int n){
    for(int i =0;i<n;i++){
        if(ds_SV.at(i).mark>5){
        cout<<"\nMSV: "<<ds_SV.at(i).id<<"\nNAME: "<<ds_SV.at(i).name<< "\nMARK: "<<ds_SV.at(i).mark<<endl;
        cout<<"\t==========================";
        }
    }
}
int main (){
vector <SV> ds_SV;
int n;
cout<<"Input number of students: ";
cin>>n;
GetInput(ds_SV,n);
SortMark(ds_SV,n);
// GetOutput(ds_SV,n);
 ShowStudentPass(ds_SV,n);
    return 0;
}