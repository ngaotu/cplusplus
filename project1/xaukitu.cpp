#include <iostream>
#include <cstring>

using namespace std;
int main (){
    string str1;
    cout<<"nhap xau ki tu: \n";
    getline(cin,str1);
    cout<<"Xau nhap vao: \n"<<str1;
    int dem[100];
    int max=0;
    char k;
for(int i=0;i<str1.length();i++){
dem[i]=0;
for(int j=i+1;j<str1.length();j++){
    
    
if(str1.at(i)==str1.at(j)){
    dem[i]++;
    }
}
if(max<dem[i]){
    max=dem[i];
    k=str1.at(i);
}
}

cout<<"\n Max_Value:"<<k;
if(k==' '){
    cout<<"\nNull";
}
    return 0;
}