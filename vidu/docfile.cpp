#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
/*
ifstream - Doc du lieu tu file ve chuong trinh
ofstream - Ghi du lieu tu  chuong trinh vao file
ifstream <ten bien file>;
(khai bao ra 1 bien kieu file de Doc du lieu tu file)
open(<ten duong dan den file can mo>,<che do lam viec voi file (doc ,ghi,...)>) ;
cac che do lam viec voi file :
ios::in-----	Mở một file để đọc
ios::out---- mo file de ghi
ios::trunc----- neu file da ton tai noi dung cua no se duoc cat truoc khi mo file
ios::app--------Chế độ Append. Tất cả output tới file đó được phụ thêm vào cuối file đó
ios::ate----------Mở một file cho outpur và di chuyển điều khiển read/write tới cuối của file
dong file : <tenfile>.close ();
doc du lieu tu file ra chuong trinh: 
*/

int main (){
ifstream file1;
file1.open("C:\\Users\\Admin\\Desktop\\bai.txt",ios::in);
if(file1.fail()==true){
    cout<<"Khong co\n";
    return 0;
}
else {
    cout<<"CO\n";
}
 string str1;
 getline(file1,str1); // doc dong dau tien cua file
 cout<<str1;

file1.close();
str1=str1+" nhieu lam <3";
ofstream file2;
file2.open("C:\\Users\\Admin\\Desktop\\HIHI.text",ios::out); // neu file chua co thi tao file de ghi 
file2<<str1;
file2.close();
    return 0;
}