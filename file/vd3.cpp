#include <bits/stdc++.h>
using namespace std;

void Xuatfile(ofstream & fileOut){

    fileOut.open("kqua3.text",ios::out);
    fileOut<<"Day cac so chan tu 1 den 100: \n";
    for(int i=1;i<=100;i++){
        if(i%2==0){
            fileOut<<i<<" ";
        }
    }
     fileOut<<"\nDay cac so le tu 1 den 100: \n";
    for(int i=1;i<=100;i++){
        if(i%2!=0){
            fileOut<<i<<" ";
        }
    }
    fileOut.close();
}
int main (){
    ofstream fileOut;
    Xuatfile(fileOut);
    return 0;
}