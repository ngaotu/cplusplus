#include <bits/stdc++.h>
using namespace std;
struct Student {
    string fullName;
    string date;
    // char homeLand[50];
    string homeLand;
    float averageMark;
};
void Input(Student* studentList,int n){
    for(int i =0;i<n;i++){
        cout<<"Input fullName: ";
        getline(cin,studentList[i].fullName);
        cout<<"Input date: ";
        getline(cin,studentList[i].date);
        cout<<"Input homeland: ";
        getline(cin,studentList[i].homeLand);
        cout<<"Input average of Mark: ";
        cin>>studentList[i].averageMark;
        cin.ignore();
    }
}
void ShowList(Student * studentList,int n){
    for(int i =0;i<n;i++){
        cout<<"Name: "<<studentList[i].fullName<<"\nBirth: "<<studentList[i].date<<"\nHomeLand: "<<studentList[i].homeLand<<"\nMark: "<<studentList[i].averageMark<<endl;
    }
}
bool cmp(Student a, Student b){
    return a.fullName<b.fullName;
}
bool cmp2(Student a,Student b){
    return a.averageMark>b.averageMark;
}
void SortName(Student * studentList,int n){
    sort(studentList,studentList+n,cmp);
}
void SortMark(Student * studentList,int n){
    sort(studentList,studentList+n,cmp2);
}
int main (){
    int n = 2;
    Student* studentList = new  Student[n];
    Input(studentList,n);
    // SortName(studentList,n);
    SortMark(studentList,n);
    ShowList(studentList,n);
    return 0;
}