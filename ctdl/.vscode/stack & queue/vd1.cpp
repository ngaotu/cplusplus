#include <bits/stdc++.h>
using namespace std;

// stack (ngan xep ) theo quy tac LIFO ( last in first out)
// queue ( hang doi ) lam viec theo quy tac FIFO ( first in first out)
/*
Stack có các hàm sau (ví dụ cho C++):
size : trả về kích thước hiện tại của stack. ĐPT O(1).
empty : true stack nếu rỗng, và ngược lại. ĐPT O(1).
push : đẩy phần tử vào stack. ĐPT O(1).
pop : loại bỏ phẩn tử ở đỉnh của stack. ĐPT O(1).
top : truy cập tới phần tử ở đỉnh stack. ĐPT O(1).
*/
// nhap danh sach stack cac so nguyen sau do xuat ram an hinh
// in so chinh phuong bang danh sach lien ket
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
// xuat phan tu dau stack va xoa no di
void PrintResult(Stack s){
    while(IsEmpty(s)==false){
        int x;
Pop(s,x);
cout<<x<<" ";
    }
    if(IsEmpty(s)==true){
        cout<<"\nStack is empty!";
    }
}
//xem phan tu dau stack
void ReadHead(Stack s){
    if(IsEmpty(s)==true){
        cout<<"\nStack is empty!";
    }
    else {
        int x;
        Top(s,x);
        cout<<x<<" ";
    }
}
int main (){
int n;
Node*p;
Stack s;
CreateStack(s);
GetInput(s,p,n);
ReadHead(s);
cout<<"\n";
PrintResult(s);
    return 0;
}