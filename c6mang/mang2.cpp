#include <iostream>
using namespace std;
void GetInputArray(int  a [],int n){
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
void ArithmeticProgression(int  a[] ,int n ){
    int k;
    int l1=0;
    int l2=0;
    int max=0;
    int dem[n]={0};
    for(int i=0;i<n-1;i++){
k=a[i+1]-a[i];
for(int j=i+1;j<n-1;j++){
    if(k!=(a[j+1]-a[j])){           // neu nhu k khac hieu (a[j+1]-a[j]) thi lap tuc thoat cau lenh if
break;
    } else {
        dem[i]++;       // neu khong thi tang bien dem[i] (  bo cap so cong len 1) (voi 3 so tao thanh 1 bo cap so cong)
    }
}
if(dem[i]>0){                       // gan so bo cap so cong vao gia tri max 
    if(max<dem[i]){
        max=dem[i];
    }
}
    }
for(int i=0;i<n;i++){                // duyet lan luot cac ptu cua mang ban dau neu dem[i] = max thi day cap 
 if(dem[i]==max){                           //so cong con chay trong doan [l1,l2]
        l1=i;
        l2=i+max+1;
    }
}
cout<<"The longest adding sequence of arrays: \n";
if(max==0){
    cout<<"Khong co cap so cong thoa man";
    return ;
}
    for(int i=l1;i<=l2;i++){
        cout<<a[i]<<" ";
    }
}

void multiplier(int a[] ,int n){
    float m;
    int l1=0;
    int l2=0;
    int max=0;
 
    int dem[n]={0};
    for(int i=0;i<n-1;i++){
m=float(a[i+1]) / float(a[i]);

for(int j=i+1;j<n-1;j++){
    if(m!=(a[j+1]/a[j]*1.0)){           // neu nhu k khac hieu (a[j+1]-a[j]) thi lap tuc thoat cau lenh if
break;
    } else {
        dem[i]++;       // neu khong thi tang bien dem[i] (  bo cap so cong len 1) (voi 3 so tao thanh 1 bo cap so cong)
    }
}
if(dem[i]>0){                       // gan so bo cap so cong vao gia tri max 
    if(max<dem[i]){
        max=dem[i];
    }
}
    }
for(int i=0;i<n;i++){                // duyet lan luot cac ptu cua mang ban dau neu dem[i] = max thi day cap 
 if(dem[i]==max){                           //so cong con chay trong doan [l1,l2]
        l1=i;
        l2=i+max+1;
    }
}
cout<<"The longest mutilpe of arrays: \n";
if(max==0){
    cout<<"Khong co cap so cong thoa man\n";
    return ;
}
    for(int i=l1;i<=l2;i++){
        cout<<a[i]<<" ";
    }
}

int main (){
int n;
cout<<"Elements of this array: \n";
cin>>n;
int a[100];
GetInputArray(a,n);
cout<<endl;
 ArithmeticProgression(a,n);

cout<<endl;
 multiplier(a,n);
  
system("pause");

    return 0;
}