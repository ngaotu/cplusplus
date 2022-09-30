#include <iostream>
using namespace std;

int main (){
    int i=10;
    int * ptr;
    ptr=&i;
    cout<<"Gia tri "<<*ptr;
     int j=3;
    int *ptr2= &j;
    cout<<" hello "<<(ptr-ptr2);

}