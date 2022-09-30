#include <iostream>
#include <vector>

using namespace std;
 class Students {
private :
string name;
int age;
public:
Students(){

}
~Students(){

}
void Nhap (){
    cout<<"Ten: ";
    getline(cin,name);
    cout<<"Tuoi: ";
    cin>>age;

}
void Xuat(){
    cout<<name<<" "<<age<<" tuoi."<<endl;
}
 };



 void Ds(vector<Students>&v,int n){
 for(int i=0;i<v.size();i++){
    cin.ignore();
 v.at(i).Nhap();
 }

 }
 void Dsx(vector<Students>v,int n){

for(int i=0;i<v.size();i++){

v.at(i).Xuat();
}
 }
int main (){
    int n;
    cout<<"Nhap n: ";
cin>>n;
vector <Students> v(n);
Ds(v,n);
Dsx(v,n);
    return 0;
}