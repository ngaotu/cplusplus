#include <bits/stdc++.h>
using namespace std;
#define HASH_SIZE 11
//  bang bam xu li va cham bang dslk
struct Node {
    int value;
    Node* pNext;
};
Node * hash_table[HASH_SIZE];
int hashFunc(int data){
    return (3*data+5)%HASH_SIZE;
}
void insert(int data){
    int index = hashFunc(data);
    Node*temp = new Node;
    temp->value = data;
    if(hash_table[index]==NULL){
        hash_table[index]= temp;
        return;
    }
    // temp->pNext = hash_table[index];
    // hash_table[index]= temp;
    // them vao cuoi danh sach
    hash_table[index]->pNext = temp;
    // hash_table[index] = temp;
}
bool find(int data){
    int index = hashFunc(data);
    Node * curr = hash_table[index];
    while(curr){
        if(curr->value==data){
            return true;
        }
        curr = curr->pNext;
    }
    return 0;
}
int main (){
    insert(12);
    insert(44);
    insert(13);
    insert(88);
    insert(23);
    insert(94);
    insert(11);
    insert(39);
    insert(20);
    insert(16);
    insert(5);
    cout<<find(23);
}