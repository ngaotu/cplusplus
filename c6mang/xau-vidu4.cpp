#include <iostream>
#include <cstring>
using namespace std;
//  dem so tu trong cau
int main (){
string str;
cout<<"Import sequence: ";
getline(cin,str);
int count =1;
for(int i=0;i<str.length()-1;i++){
    if(str[i]!=' '&& str[i+1]==' '){
        count ++;
    }
}
cout<<"So tu trong xau la: "<<count<<endl;

    return 0;
}