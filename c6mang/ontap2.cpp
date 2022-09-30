#include <iostream>
#include <cstring>
using namespace std;
void ChuanHoaXau(string &s){
  for(int i =0;i<s.length()-1;i++){
        if(s[0]==' '){
            s.erase(0,1);
            i--;
        }
        else {
            if(s[i]==' ' && s[i+1]==' '){
                s.erase(i,1);
                i--;
            }
        }
  }
    
}

int main (){
string s;
cout<<"Nhap xau: ";
getline(cin,s);
ChuanHoaXau(s);
cout<<s;
    return 0;
}
