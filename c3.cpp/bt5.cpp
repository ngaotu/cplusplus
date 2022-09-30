#include <iostream>
using namespace std;

int main (){
    double nhietdo;
    cout<<"Nhiet do: ";
    cin>>nhietdo;
    if(nhietdo<100){
       cout<<" Nho hon nhiet do cua nuoc soi"; 
    }
    if(nhietdo==100){
        cout<<"Nhiet do bang nhiet do cua nuoc soi";
    }
    if(nhietdo>100){
        cout<<"Nhiet do lon hon nhiet do cua nuoc soi";
    }

    return 0;
}