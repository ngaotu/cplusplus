/*
Đề bài : nhập vào 1 giá trị x dương bất kì. Đưa ra màn hình giá trị ln(x) . Không sử dụng hàm tính loga tự nhiên có sẵn trong c++
( gợi ý: dùng chuỗi số để tính)
*/
#include <iostream>
#include <cmath>
#define eps 0.0001 // dinh nghia sai so la 10^-4
using namespace std;

float Ln(float x){
float tmp= (x-1)/(x+1);
float e = 2*tmp; // sai so ban dau bang so hang dau tien cua chuoi
int n=0;
float ln=0;
// lặp lại cho đến khi độ sai số hiện tại nhỏ hơn eps
while(e>=eps){
    e=2*pow(tmp,2*n+1)/(2*n+1);
    ln+=e;
    n++;
}
return ln;
 }

int main (){
int x;
do{
cout<<"Nhap x: ";
cin>>x;
if(x<=0){
    cout<<"\nGia tri khong hop le. Vui long nhap lai !";
}
} while(x<=0);
cout<<"Ln("<<x<<")= "<<Ln(x)<<endl;
    return 0;
}