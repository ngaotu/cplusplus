#include <bits/stdc++.h>
using namespace std;
/*
Queue(hàng đợi) là một loại container, được thiết kế để hoạt động theo kiểu FIFO (First- in first – out) 
(vào trước ra trước), tức là một kiểu danh sách mà việc bổ sung được thực hiển ở cuối danh sách 
và loại bỏ ở đầu danh sách
Trong queue, có hai vị trí quan trọng là vị trí đầu danh sách (front), 
nơi phần tử được lấy ra, và vị trí cuối danh sách (back), nơi phần tử cuối cùng được thêm vào.
thay vi di xay dung queue va stack ta cung co the su dung thu vien

*/
struct node{
int data;
node*Next;
};
typedef struct node Node;
Node*CreateNode(int x){
    Node*p=new Node;
    p->data=x;
    p->Next=NULL;
    return p;
}
// tao queue
struct Queuee{
Node*pHead;
Node*pTail;
};
typedef struct Queuee Queue;
void CreateQueue(Queue&q){
    q.pHead=NULL;
    q.pTail=NULL;
}
// kiem tra xem hang doi co rong khong
bool Isempty(Queue&q){
    if(q.pHead==NULL){
        return true;
    }
    return false;
}
// them vao cuoi hang doi
void Push(Queue&q,Node*p){
    if(Isempty(q)==true){
q.pHead=q.pTail=p;
    }
    else{
        q.pTail->Next=p;
        q.pTail=p;
    }
}
// ham nhap queue
void GetInput(Queue&q,Node*p,int &n){
    cout<<"Enter the number of queue: ";
    cin>>n;
    int x;
    for(int i=1;i<=n;i++){
        cout<<"Enter X: ";
        cin>>x;
        p=CreateNode(x);
        Push(q,p);
    }
}
// ham lay ra phan tu dau tien
bool Front(Queue q){
if(Isempty(q)==true){
    cout<<"Queue is empty!";
    return false;
}
else{
    int x;
    x=q.pHead->data;
    cout<<x;
}
return true;
}
// truy xuat phan tu cuoi cung
bool Back(Queue q){
if(Isempty(q)==true){
    cout<<"Queue is empty!";
    return false;
}
else{
    int x;
    x=q.pTail->data;
    cout<<x;
}
return true;
}
//  lay va loai bo phan tu o dau queue
bool Pop(Queue&q, int &x){
    if(Isempty(q)==true){
    cout<<"Queue is empty!";
    return false;
}
else{
    Node*p=q.pHead;
   
x=p->data;
q.pHead=q.pHead->Next;
delete p;
}
return true;
}

void PrintResult(Queue q){
    while(Isempty(q)==false){
int x;
Pop(q,x);
cout<<x<<" ";
    }
    if(Isempty(q)==true){
        cout<<"\nQueue is empty!";
    }
}
int main (){
Queue q;
Node*p;
int n;
CreateQueue(q);
GetInput(q,p,n);
Front(q); // lay ra phan tu dua tien
Back(q);  // lay ra phan tu cuoi ucng
return 0;
}