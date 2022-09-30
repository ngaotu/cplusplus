#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//cu phap vector<__kieu du lieu__><__ten__>
//vd: vector <int> arr; (khai bao mang vector chua cac so nguyen)

/*
....ham resize(<so luong>) cap phat mang voi 1 so luong phan tu cu the nao do
(mac dinh gia tri =0)
neu mang da duoc tao ma sdung ham resize thi mang se tang len hoac giam so luong phan tu xuong
....resize(soluong,gia tri mac dinh )
.....ham size tra ve kich thuoc cua vector
.... push_back(phan tu bat ki) them phan tu bat ki vao cuoi vector (mang 1 chieu );
...pop_back() xoa phan tu cuoi cung cua vector
...erase(<ten_vector>.begin(),so nguyen x) (xoa phan tu thu x cua vector)
...erase(<ten_vector>.begin(),so nguyen x,<tenvector>.begin(),so nguyen y) (xoa  tu phan tu thu x cua vector den phan tu thu y-1)
...clear() xoa tat ca phan tu cua vector
...insert(<ten_vector>.begin()+so nguyen x, gia tri chen) // chen vao vi tri x gia tri nao do
...swap(vector x) hoan doi vector x voi vector hien tai

*/

void Xuatmang(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    }
}

int main (){
 vector <int> a;
 int n;
 cout<<"Nhap n: ";
 cin>>n;
 a.resize(n);
// Nhapmang(arr);
// Xuatmang(arr);
//  vector <int> a;

//     for(int i=0;i<5;i++){
//        a.push_back(i+1); // tu dong them i+1 vao cuoi amng

//     }

for(int  i=0; i<a.size();i++){
    cout<<"arr["<<i<<"]= ";
    cin>>a.at(i);
}
Xuatmang(a);
a.insert(a.begin()+3,10);
Xuatmang(a);
cout<<endl;
sort(a.begin(),a.end());
Xuatmang(a);
    return 0;
}
