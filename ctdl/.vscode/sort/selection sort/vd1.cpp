#include <bits/stdc++.h>
using namespace std;
/*
Thuật toán selection sort sắp xếp một mảng bằng cách đi tìm phần tử có giá trị nhỏ nhất(giả sử với sắp xếp mảng tăng dần) 
trong đoạn đoạn chưa được sắp xếp và đổi cho phần tử nhỏ nhất đó với phần tử ở đầu đoạn chưa được sắp xếp(không phải đầu mảng)
. Thuật toán sẽ chia mảng làm 2 mảng con
Một mảng con đã được sắp xếp
Một mảng con chưa được sắp xếp
Tại mỗi bước lặp của thuật toán, phần tử nhỏ nhất ở mảng con chưa được sắp xếp sẽ được di chuyển về đoạn đã sắp xếp.
Độ  phức tạp thuật toán
 O(n^2)
*/
void GetInput(int a[],int &n){
    cout<<"Enter number of array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
void PrintResult(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void SelectionSort(int a[], int n){
    int min_index;
    for(int i=0;i<n-1;i++){
min_index=i;
        for(int j=i+1;j<=n-1;j++){
if(a[j]<a[min_index]){
    min_index=j; // di tim chi so cua phan tu co gia tri nho nhat cua mang chua sap xep
}
        }
        swap(a[i],a[min_index]);
    }
}
int main (){
int a[100];
int n;
GetInput(a,n);
SelectionSort(a,n);
PrintResult(a,n);
    return 0;
}