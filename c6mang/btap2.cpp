#include <iostream>
#include <iomanip>
using namespace std;

int main (){
int a[8]={2,4,6,8,10,12,14,16};
int b[3][3]={2,4,6,8,10,12,14,16,18};
cout<<"In ra day a: ";
for(int i=0;i<8;i++){
    cout<<a[i]<<" ";
}
cout<<"\nIn ra day b: \n";
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<setw(4)<<b[i][j]<<" ";
    }
    cout<<"\n";
}
    return 0;
}