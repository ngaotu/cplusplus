#include <iostream>
#include <cmath>
using namespace std;

int ucln( int a, int b){
int r;
    while(b != 0) {
        r = a % b; // r la so du phep chia a cho b
        a = b;
        b = r;
    }
    return a;
}
int bcnn(int a,int b){
    
     return a*b/ucln(a,b);

}
int main (){
    int a,b;
    do{
    cout<<"Nhap a: ";
    cin>>a;
    } while (a<=0);
    do{
    cout<<"Nhap b: ";
    cin>>b;
    } while (b<=0);
    
    cout<<"ucln: "<<ucln(a,b);
    cout<<"\nbcnn: "<<bcnn(a,b);
    return 0;
}