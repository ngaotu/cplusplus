#include <bits/stdc++.h>
using namespace std;

struct List{
    int data;
    List* pNext;
    List* pPre;
} typedef DL;
DL*Create(int e){
    DL* tmp = new DL();
    tmp->data = e;
    tmp->pNext = NULL;
    tmp->pPre = NULL;
    return tmp;
}
bool isEmpty(DL* head){
    return head ==NULL;
}
void push_front(DL* &head,int e){
    DL* tmp = Create(e);
    if(isEmpty(head)){
        head = tmp;
    }
    else {
     tmp->pNext = head;
     head->pPre = tmp;
     head = tmp;
    }
}
void push_back(DL* &head,int e){
    DL* tmp = Create(e);
    if(isEmpty(head)){
        head = tmp;
    }
    else {
        DL* p = head;
        while(p->pNext !=NULL){
            p = p->pNext;
        }
        p->pNext = tmp;
        tmp->pPre = p;
    }
}
void pop_front(DL* &head){
    if(!isEmpty(head)){
        DL * tmp = head;
        head = head->pNext;
        head->pPre =NULL;
        delete tmp;
    }
}
void pop_back(DL* &head){
    if(!isEmpty(head)){
        DL * pre = NULL;
        DL* cur = head;
        while(cur->pNext!=NULL){
            pre = cur;
            cur = cur->pNext;
        }
        if(pre ==NULL){
            head = NULL;
        }
        else {
            pre->pNext = NULL;
            cur->pPre =NULL; 
        }
    }
}
void show(DL* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->pNext;
    }
}
void showPre(DL*head){
    DL*tmp = head;
    while(tmp->pNext!=NULL){
        tmp = tmp->pNext;
    }
    while(tmp!=NULL){
        cout<<tmp->data<<" ";
        tmp = tmp->pPre;
    }
}
int main (){
    DL* head = NULL;
    push_back(head, 1);
    push_back(head,2);
    push_back(head,3);
    push_front(head,4);
    pop_front(head);
    pop_back(head);
    show(head);
    return 0;
}