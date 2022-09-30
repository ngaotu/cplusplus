#include <iostream>

using namespace std;
int UCLN(int a,int b){
    int temp;
    while(b!=0){
        temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
class Fraction {
private:
int numberator,denominator;
public:
Fraction(){

}
~Fraction(){

}
void GetInput(){
    cout<<"Enter numberator: ";
    cin>>numberator;
    do{
cout<<"Enter denominator: ";
    cin>>denominator;
    } while(denominator==0);
    
}
void Compact( ){
   int temp=UCLN(numberator,denominator);
    numberator/=temp;
    denominator/=temp;
}
void ShowResult(){
    Compact();
    cout<<numberator<<"/"<<denominator;
}

};
int main (){
Fraction x;
x.GetInput();
x.ShowResult();
    return 0;
}