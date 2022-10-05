#include <bits/stdc++.h>
using namespace std;
// de bai: in ra chieu dai cua cay nhi phan 
struct TreeNode {
    TreeNode*right;
    TreeNode*left;
    int val;
    TreeNode(int val = 0){
        this->val=val;
        this->right=NULL;
        this->left = NULL;
    }
};
// nlr
void display(TreeNode*root){
    if(root!=NULL){
        cout<<root->val<<" ";
        display(root->left);
        display(root->right);
    }
}
TreeNode* init(TreeNode* root,int value){
    TreeNode* newNode = new TreeNode(value);
    if(root==NULL){
        root = newNode; 
        return root;       
    }
    TreeNode * tmp = root;
    while(true){
        if(tmp->val<value){
            if(tmp->right ==NULL){
                tmp->right = newNode;
                break;
            }
            tmp=tmp->right;
        }
        else {
            if(tmp->left==NULL){
                tmp->left = newNode;
                break;
            }
            tmp=tmp->left;
        }
    }
    return root;
}
int maxHeightBST(TreeNode* root){
    int res = 1;
    // do dai cua cay co 1 node
    if(root==NULL){
        return 0;
    }
    int left = maxHeightBST(root->left);
    int right = maxHeightBST(root->right);
    res = max(left,right)+1;
    return res;
}

int main (){
    int n;
    cin>>n;
    int x;
    cin>>x;
TreeNode * t = new TreeNode(x);
for(int i =0;i<=n-2;i++){
    cin>>x;
    init(t,x);
}
display(t);
cout<<"\nDo dai cay nhi phan: "<<maxHeightBST(t);
}