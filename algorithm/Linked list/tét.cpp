#include <bits/stdc++.h>
using namespace std;

struct Student{
string name;
string id;
string datebirth;
float mark;
};

void ReadStudent(Student& sv,ifstream&Filein){
    getline(Filein,sv.name,',');
    getline(Filein,sv.id,',');
    getline(Filein,sv.datebirth,',');
    Filein>>sv.mark;
}
void ShowInformation(Student sv){
    cout<<sv.name<<" "<<sv.id<<" "<<sv.mark<<endl;
}
int main (){
Student sv;
ifstream Filein;
Filein.open("sv.txt",ios::in);
ReadStudent(sv,Filein);
ShowInformation(sv);
Filein.close();
    return 0;
}