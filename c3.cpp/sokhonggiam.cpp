/*
Đề bài: Nhập vào một số nguyên dương n(n<=10) .In ra màn hình tất cả các số không giảm có n chữ số 
( số không giảm là số có chữ số đằng sau lớn hơn đằng trước)
*/
#include <iostream>
#include <cmath>
using namespace std;

bool Check_Value(int so){
int chuso;
while(so!=0){
chuso=so%10;
so=so/10;
// so sanh  voi chu so lien truoc
if(chuso<(so%10)){
    return false;
     // neu chu so lien truoc lon hon thi tra ve false
}
}
return true;
}
int main (){
int n;
do{
cout<<"Nhap n: ";
cin>>n;
} while (n<=0|| n>10);
cout<<"Cac so khong giam co "<<n<<" chu so la: \n";
for(int i=pow(10,n-1);i<pow(10,n);i++){
    if(Check_Value(i)==true){
        cout<<i<<" ";
    }
}
    return 0;
}