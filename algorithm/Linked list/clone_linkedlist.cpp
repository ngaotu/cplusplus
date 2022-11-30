#include <bits/stdc++.h>
using namespace std;

struct Node{
    Node*pNext;
    int data;
};
Node * CreateNode(int num){
    Node * tmp = new Node;
    tmp->pNext = NULL;
    tmp->data = num;
    return tmp;
}
struct List{
    Node*pHead;
    Node*pTail;
    List(){
        pHead = NULL;
        pTail =NULL;
    }
    void AddHeadElement(Node * p);
    void AddEndElement(Node * p);
    void DelElement(Node * p);
    bool SearchElement();
    bool Destroy();
    void Show();
    bool isEmpty();
};
bool List::isEmpty(){
    if(pHead == NULL){
        return true;
    }
    return false;
}
void List::AddHeadElement(Node * p){
    int x;
    cout<<"Nhap gia tri: ";
    cin>>x;
    p = CreateNode(x);
    if(isEmpty()){
        pHead = pTail = p;
    }
    else {
        p->pNext = pHead;
        pHead = p;
    }
}
void List::AddEndElement(Node * p){
    int x;
    cout<<"Nhap gia tri: ";
    cin>>x;
    p = CreateNode(x);
    if(isEmpty()){
        pHead = pTail = p;
    }
    else {
        pTail->pNext = p;
        pTail = p;
    }
}
void List::Show(){
    for(Node * k = pHead;k!=NULL;k=k->pNext){
        cout<<k->data<<" ";
    }
}
void List::DelElement(Node * p){
    int x;
    cout<<"Nhap gia tri can xoa: ";
    cin>>x;
    p = CreateNode(x);
    // xac dinh vi tri can xoa
    int cnt = -1;
    for (Node * k = pHead;k!=NULL;k=k->pNext){
        cnt++;
        if(p->data==k->data){
            break;
        }
    }
    if (cnt ==0){
        Node * q = pHead;
        pHead =pHead->pNext;
        delete q;
    }
    else {
        int tmp = -1;
        for(Node * k = pHead;k !=NULL;k = k->pNext){
            tmp ++;
            if(tmp==cnt-1){
                Node * q = k->pNext;
                k->pNext = q->pNext;
                delete q;
                break;
            }
        }
    }
}
bool List::SearchElement(){
    int num;
    cout<<"Nhap gia tri can tim kiem: ";
    cin>>num;

    for ( Node * k = pHead;k!=NULL;k = k->pNext){
        if(k->data ==num){
            return true;
        }
    }
    return false;
}
bool List::Destroy(){
    for(Node * k = pHead;k!=NULL;k=k->pNext){
        Node * q = k;
        delete q;
    }
    return true;
}

int main (){
    List l;
    Node * p =NULL;
    for(int i = 0;i<5;i++){
        l.AddEndElement(p);
    }
    l.DelElement(p);
    l.Show();
    cout<<l.SearchElement();
    l.Destroy();
    // l.Show();
    return 0;
}