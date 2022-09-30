#include <iostream>
#include <cmath>
using namespace std;
#define eps 0.0001   // dinh nghia sai so la 10^-4
 
 // ham tinh sin(X)
float Arctan(float x){
    int n=0; 
   float temp=x; // sai so ban dau la 1
    float arctan=0;
    // lap cho den khi sai  hien tai so be  hon eps
    while(abs(temp)>=eps){
        if(x*x<1){
        temp=pow(-1,n)*pow(x,2*n+1)/(2*n+1);
        }
        else if(x*x==1){
            arctan=x*M_PI/4;
            break;
        }
        else{
            temp=pow(-1,n+1)/((2*n+1)*pow(x,2*n+1));
        }
        arctan+=temp;
        n++;
    }
    if(x>1){
        arctan+=M_PI/2;
    }
    else if(x<-1){
        arctan-=M_PI/2;
    }
    // doi tu radian sang degree
    arctan=arctan*180/M_PI;
    return arctan;
}

int main (){
float x;
cout<<"Enter Angle(D): ";
cin>>x;
cout<<"arctan("<<x<<")= "<<Arctan(x)<<"\n";
system("pause");
    return 0;
}