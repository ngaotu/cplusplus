#include <bits/stdc++.h>
using namespace std;
#define M 17
struct node{
    int value;
    node* next;
};
void initHashing(node*head[]){
    for(int i =0;i<M;i++){
        head[i] = NULL;
    }
}
node*makeNode(int x){
    node* tmp = new node;
    tmp->value=x;
    tmp->next=NULL;
    return tmp;
}
// ham bam
int hashFunc(int value){
    return value%M;
}
void insertNode(node* head[],int value){
    int h = hashFunc(value);
    node*p = makeNode(value);
    //  lay ra danh sach lien ket thu h
    node* cur = head[h];
    node*pre = NULL;
    while(cur!=NULL && cur->value<value){
        pre= cur;
        cur = cur->next;
    }
    if(pre ==NULL){
        head[h]=p;
    }
    else if (cur==NULL){
        pre->next = p;
    }
    else{
        pre->next=p;
        p->next=cur;
    }

}
int main (){

}