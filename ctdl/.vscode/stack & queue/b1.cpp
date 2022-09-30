

/*
CHUYEN he co so 10 sang cac he co so 2 ,8 ,16
*/
#include <bits/stdc++.h>
using namespace std;
// created a node
struct node
{
    int data;
    node*pNext; 
};
typedef struct node Node;

Node* CreateNode(int x){
    Node*p=new Node;   
p->data=x;
p->pNext=NULL;
return p;
}

struct stackk
{
    Node*pTop;   
     
};
typedef struct stackk Stack;

void CreateStack(Stack&s){
    s.pTop=NULL;
}
// kiem tra stack co rong hay khong
bool IsEmpty(Stack&s){
if(s.pTop==NULL){
    return true;
}
return false;
}
// them 1 phan tu vao dau stack
void Push(Stack&s,Node*p){
    if(IsEmpty(s)==true){
        s.pTop=p;
    }
    else {
        p->pNext=s.pTop;
        s.pTop=p;
    }
}
bool Pop(Stack &s ,int &x){
    if(IsEmpty(s)==true){
        return false;
    }
    else {
    Node*p=s.pTop;
    x=s.pTop->data;
    s.pTop=s.pTop->pNext;
    delete p;
    }
    return true; // lay thanh cong
}
bool Top(Stack&s,int&x){
    if(IsEmpty(s)==true){
        return false;
    }
    else {
        x=s.pTop->data;
    }
    return true; // lay phan tu dau danh sach de xem
}
void GetInput(Stack&s,Node*p,int&n){
    cout<<"The number of stack: ";
    cin>>n;
    int x;
    for(int i=1;i<=n;i++){
cout<<"Enter X: ";
cin>>x;
p=CreateNode(x);
Push(s,p);
    }
}
// xuat so sau khi chuyen
void PrintResult(Stack s){
    while(IsEmpty(s)==false){
        int x;
Pop(s,x);
if(x<10){
    cout<<x;

} else {
    cout<< (char)(x+55);
}
    }
    if(IsEmpty(s)==true){
        cout<<"\nStack is empty!";
    }
}// chuyen he co so 10  sang he co so bat ki
void BaseSystem(Stack&s,int &number,int& base){
cout<<"Number need to convert: ";
cin>>number;
do{
cout<<"Convert base 10 to Base: ";
cin>>base;} while(base<0||base>16);
while(number!=0){
    int x;
    x=number%base;
    number=number/base;
    Node*p=CreateNode(x);
    Push(s,p);
}
}
// chuyen he co so bat ki sang he 10
void Convert(Stack&s,char number1[],int&base){
    int result=0;
    cout<<"Number need to convert: ";
cin>>number1;
do{
cout<<"Convert base X to Base 10: ";
cin>>base;}while(base<0||base>16);

for(int i=0;i<strlen(number1);i++){
 int x;
 if(number1[i]>=65){
    x=(int) (number1[i]-=55);

 }else {
    x=(int)(number1[i]-48);
  
 }
    Node*p=CreateNode(x);
    Push(s,p);

}
  int temp=0;
 while(IsEmpty(s)==false){
        int x;
Pop(s,x);
result+=x*pow(base,temp);
temp++;
 }
 cout<<"\nNumber after convert: "<<result;
    if(IsEmpty(s)==true){
        cout<<"\nStack is empty!";
    }

}
int main (){
int n,number,base;
char number1[100];
Node*p;
Stack s;
CreateStack(s);
int choose;
while(true){
    cout<<"\n\t\t===========MENU==========";
    cout<<"\n\t1.Convert base 10 to base X";
    cout<<"\n\t2.Convert base X to base 10";
    cout<<"\n\t3.Exit";
    cout<<"\n\t\t===========END==========";
    cout<<"\n\t.Select your choose: ";
    cin>>choose;
    if(choose==1){
        BaseSystem(s,number,base);
        cout<<"\nNumber after convert: ";
        PrintResult(s);
    } else if(choose==2){
    Convert(s,number1,base);
    }
    else if(choose==3){
        break;
    }
    else {
        cout<<"\nYour choose is invalid ! Please try again";
    }
}

    return 0;
}