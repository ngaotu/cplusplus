#include <iostream>
using namespace std;
int main()
{ 
   int i,j,k,t,n,m,hang;
   float a[10][10],temp,luu;
   
   cout <<"Tinh hang ma tran cap n*m (1<=n,m<=10)";
   do{
     cout<<"\nNhap so hang: ";
cin>>n;
   }while(n>10||n<1);
   do{
      cout<<"\nNhap so cot: ";
      cin>>m;
   }while(m>10||m<1);
   //Nhap ma tran
   cout<<"\nNhap vao ma tran kich thuoc "<<n<<" * "<<m<<endl;
   for(i=0;i<n;i++){
      for(j=0;j<m;j++){
        cout<<"a["<<i<<"]["<<j<<"]= ";
        cin>>a[i][j];
      }
   }
   
   //In ra ma tran vua nhap vao
   cout<<"\n Ma tran vua nhap vao la:\n";
   for(i=0;i<n;i++){
      for(j=0;j<m;j++){
     cout<<a[i][j]<<"   ";
      }
     cout<<"\n";
   }
   i=0;j=0;
   while(i<n&&j<m){
      if(a[i][j]==0){
     for(t=i+1;t<n;t++)
        if(a[t][j]!=0){
           for(k=i;k<m;k++){ // doi cho 2 hang cho nhau 
          temp=a[t][k];
          a[t][k]=a[i][k];
          a[i][k]=temp;
           }
           break;
        }
     if(t==n)j++;
      }
      if(a[i][j]!=0){
     for(t=i+1;t<n;t++)
        if(a[t][j]!=0){
           luu=a[t][j];
           for(k=j;k<m;k++)
          a[t][k]=a[t][k]-a[i][k]*luu/a[i][j];
        }
     i++;j++;
      }
   }
   cout<<"\nViet lai ma tran vua nhap vao :\n";
  for(i=0;i<n;i++){
      for(j=0;j<m;j++){
     cout<<a[i][j]<<"  ";
      }
     cout<<"\n";
   }
   hang=n;
   for(i=0;i<n;i++){
      for(j=0;j<m;j++){
     if(a[i][j]!=0)
     break;
      if(j==m){
      hang--;
      }
      }
   }
   cout<<"\nHang cua ma tran la: "<<hang<<"\n";

}