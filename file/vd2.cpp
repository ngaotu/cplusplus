#include <bits/stdc++.h>
using namespace std;

int main (){
    fstream filein;
    filein.open("vd2.txt",ios::in);
    int n;
    int a[100][100];
    filein>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           filein>>a[i][j];           
        }
    }
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<<a[i][j]<<" ";         
        }
        cout<<"\n";
    }
    filein.close();
    return 0;
   }