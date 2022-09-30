#include <iostream>
using namespace std;
void GetInput(int *a,int n){
    for(int i =0;i<n;i++){
        cin>>*(a+i);
    }
}
// void GetOutput(int *a,int n){
//    for(int i=0;i<n;i++){
//        cout<<a<<endl; 
//     //     in dia chi cua mang
//     cout<<(a+i)<<endl;
//     // in dia chi cac phan tu trong mang
//     cout<<*(a+i)<<endl;
//     // in gia tri
//    }
// }
// bo nho heap luu tru cac doi tuong ( khai bao bang tu khoa new)
//  bo nho stack luu tru cac bien cac ham cac tham so,...
// con tro const ( con tro hang) la loai con tro chi gan duoc dia chi mot lan khi khoi tao dieu nay co nghia sau khi tro den vung nho nao do thi no khong th tri di noi khac duoc
//  de khai bao const pointer chung ta can dat tu khoa const  giua dau * va ten con tro

void GetOutput(int *a,int n){
    
    for(int *p= &a[0];p< &a[n]; p++ ){
        cout<<*p<<" "<<p<<"  ";
    }
}

int main (){
int n;
cout<<"Nhap n: ";
int * a = new int (n);

cin>>n;  
GetInput(a,n);
GetOutput(a,n);
delete[] a;

int b =10;
int *const ptr = &b;
//  khai bao con tro hang va gan cho con tro dia chi cua bien b

cout<<ptr;

return 0;
}