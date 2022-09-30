#include <bits/stdc++.h>
using namespace std;

int main (){
    int n,m;

  int **a =new int* [n];
for(int i=0;i<n;i++){
    a[i]=new int [m];
}
for(int i =0;i<n;i++){
    delete[] a[i];
}
delete[] a;
    return 0;
}