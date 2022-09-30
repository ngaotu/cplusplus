#include <iostream>
#include <cstring>
using namespace std;
string strIn;
 int count[256];
void GetInput(){
    do{
   cout<<"Import a sequence: \n";
    getline(cin,strIn);
for(int i=0;i<strIn.length();i++){
    if(strIn.at(i)==' '){
       strIn.at(0)=' ';
        break;
    }
}
    } while(strIn.at(0)==' ' || strIn.length()>255);
    

}
void Check_character(){
   
for(int i=0;i<strIn.length();i++){
    count[i]=0;
for(int j=0;j<strIn.length();j++){
if(strIn.at(i)==strIn.at(j)){
    count[i]++;
}
 
}
if(count[i]==1){
        cout<<strIn.at(i)<<" ";
    }
}

}
int main (){
GetInput();
Check_character();

    return 0;
}