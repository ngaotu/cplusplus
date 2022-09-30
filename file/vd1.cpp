#include <bits/stdc++.h>
using namespace std;
 
int main (){
  ifstream filein;
  if(!filein.is_open()){
  filein.open("vd1.txt",ios::in);
  }
  int n;
  ofstream fileout;
  fileout.open("ketqua1.txt",ios::out);
  string name;
  filein>>n;
  getline(filein,name);
  fileout<<n<<"\n";
  for(int i=0;i<n;i++){
    getline(filein,name);
    fileout<<i+1<<"."<<name<<"\n";
  }
  filein.close();
  fileout.close();
    return 0;
}