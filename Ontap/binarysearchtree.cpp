#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node*left;
    node*right;
};
node*makeNode(int e){
    node* tmp = new node;
    tmp->data=e;
    tmp->left=NULL;
    tmp->right=NULL;
    return tmp;
}
// tinh chieu cao cua cay
int highestTree(node*root){
    if(root==NULL){
        return 0;
    }
    int left = highestTree(root->left);
    int right = highestTree(root->right);
    return max(left,right)+1;
}
void insert(node*&root,int x){
    if(root==NULL){
        root = makeNode(x);
    }
    else {
        if(x>root->data){
            insert(root->right,x);
        }
        else if(x<root->data){
            insert(root->left,x);
        }
        // khong them gia tri trung lap vao cay nhi phan tim kiem
        else{
            return;
        }
    }
}
void DFS(node*root){
    if(root){
        cout<<root->data<<" ";
        DFS(root->left);
        DFS(root->right);
    }
}
void DFS3(node*root){
    if(root){
        DFS3(root->left);
        cout<<root->data<<" ";
        DFS3(root->right);
    }
}
// duyet cay bang stack
void DFS2(node*root){
    stack <node*> st;
    node*p = root;
    while(p!=NULL){
        while(p!=NULL){
            st.push(p);
            p= p->left;
        }
        while(!st.empty()){
            node*tmp = st.top();
            st.pop();
            cout<<tmp->data<<" ";
            if(tmp->right!=NULL){
                p = tmp->right;
                break;
            }
        }
}
}
void DestroyTree(node*&root){
    if(root){
        DestroyTree(root->left);
        DestroyTree(root->right);
        delete root;
    }
}
bool findNode(node*root,int x){
    if(root){
        if(root->data==x){
            return true;
        }
        else if (root->data<x){
            return findNode(root->right,x);
        }
        else {
            return findNode(root->left,x);
        }
    }
    return false;
}
void DeleteNode(node*& root,int x){
    if(root){
        if(x>root->data){
            DeleteNode(root->right,x);
        }
        else if(x<root->data){
            DeleteNode(root->left,x);
        }
        //  nut hien tai la nut can xoa
        else {
            if(root->left==NULL&&root->right==NULL){
                root =NULL;
            }
            // nut hien tai co 1 nut con ben trai 
            else if (root->left==NULL&&root->right!=NULL){
                root = root->right;
            }
            else if (root->left!=NULL && root->right==NULL){
                root = root->left;
            }
            else {
                // tim nut trai cung ben phai
                node* tmp = root->right;
                while(tmp->left!=NULL){
                    tmp = tmp->left;
                }
                // gan gia tri cho nut can xoa 
                root->data = tmp->data;
                // de quy xoa nut tmp o cay con ben phai
                DeleteNode(root->right,tmp->data);
            }
        }
    }
}
int main(){
    node * root =NULL;
    int n =9;
    for (int i =0;i<n;i++){
        int x;
        cin>>x;
        insert(root,x);
    }
    // cout<<highestTree(root);
    cout<<"\nCay truoc khi xoa: ";
    DFS3(root);
    DeleteNode(root,30);
    cout<<"\nCay sau khi xoa: ";
    DFS(root);
    cout<<"\nTim kiem phan tu 3: "<<findNode(root,3);
    return 0;
}