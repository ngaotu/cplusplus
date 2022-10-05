#include <bits/stdc++.h>
using namespace std;
// Binary search tree
struct TreeNode{
 int val;
 TreeNode * left;
 TreeNode * right;
 TreeNode(int val =0){
    this->val = val;
    this->left = NULL;
    this->right =NULL;
 }
};

//  duyet nlr
void init(TreeNode * root){
    // neu cay con phan tu
    if(root!=NULL){
        // in ra node hien tai
        cout<<root->val<<" ";
        // duyet node con ben trai
        init(root->left);
        //  duyet node con ben phai
        init(root->right);
    }
 }
//  add newNode in binary search tree
TreeNode* insertIntoBST(TreeNode* root, int value) {
        TreeNode * newNode = new TreeNode(value);
        if(root==NULL){
        root  = newNode;
        return root;
    }
    else {
        TreeNode* tmp = root;
        while(true){
            if(tmp->val<value){
                if(tmp->right==NULL){
                    tmp->right = newNode;
                    break;
                } 
                    tmp = tmp->right;
            }
            else{
                if(tmp->left==NULL){
                    tmp->left = newNode;
                    break;
                }
                tmp = tmp->left;
                
            }
        }
    }
    return root;
    }
// xoa 1 node trong BST
TreeNode* delFromBST(TreeNode * root, int value){
    //  duyet de tim vi tri cua node x can xoa
   if(root==NULL){
    return NULL;
   }
   if(root->val>value){
    root->left = delFromBST(root->left,value);
   }
   else if (root->val<value){
    root->right = delFromBST(root->right,value);
   }
   else { 
    //  root->val = value
    // xoa node root
    // TH1: root is leaf
    if(root->left==NULL&&root->right==NULL){
        return NULL;
    }
    // root co 1 node con ben trai
    if(root->left!=NULL && root->right ==NULL){
        return root->left;
    }
    // root co 1 node con ben phai
      if(root->right!=NULL && root->left ==NULL){
        return root->right;
    }
    // th3 : root co 2 node con
    if(root->right!=NULL && root->left !=NULL){
        TreeNode * tmp = root->right;
//         tim gia tri node trai cung cua node con ben phai
        while(tmp->left!=NULL){
            tmp = tmp->left;
        }
        // sau do gan gia tri cho root
//         thuc hien xoa node con do di de dc cay moi
        root-> val = tmp->val;
        root->right = delFromBST(root->right,tmp->val);
        //  gan lai node ben phai cua root sau khi thuc hien xoa di node tmp 
    }
   }
   return root;
}
// tim kiem 1 node trong tree
TreeNode * findNode(TreeNode* root,int value){
    if(root==NULL){
        return NULL;
    }
    if(root->val<value){
       return findNode(root->right,value);
    }
    else if (root->val>value) {
       return findNode(root->left,value);
    }
    else {
        return root;
    }
}
int main (){
    TreeNode * t = new TreeNode(5);
    insertIntoBST(t,3);
    insertIntoBST(t,9);
    insertIntoBST(t,8);
     insertIntoBST(t,2);
    init(t);
    cout<<"Tim kiem node: ";
    init(findNode(t,3));
    return 0;
}