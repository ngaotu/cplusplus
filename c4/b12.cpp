#include <iostream>
using namespace std;
int Fibocca(int n){
    if(n==0||n==1){
        return 1;
    }
    return Fibocca(n-1)+Fibocca(n-2);
}

int main (){
int n;
cout<<"Nhap n: ";
cin>>n;
cout<<"\nSo fibocca thu "<<n<<" la: "<<Fibocca(n);
    return 0;
}