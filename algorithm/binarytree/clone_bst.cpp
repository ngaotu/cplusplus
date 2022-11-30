#include <bits/stdc++.h>
using namespace std;
// template <class item>
struct TreeNode {
    TreeNode* left;
    TreeNode* right;
    int val;

};

 void destroy(TreeNode * root){
    if(root ==NULL){
        return;
    }
    destroy(root->left);
    destroy(root->right);
}

// TreeNode* init(){
//     TreeNode * root = new TreeNode;
//     root = NULL;
//     return root;
// }
TreeNode* push(TreeNode * root,int val){
    if(root ==NULL){
        TreeNode* node = new TreeNode;
        node->val = val;
        node->left = NULL;
        node->right = NULL;
        return node;
    }
    if (root->val > val){
        root->left = push(root->left,val);
    }
    else if (root->val < val){
        root->right = push(root->right,val);
    }
    return root;
}
bool SearchNode(TreeNode * root, int val){
    if(root->val == val){
        return true;
    }
    else if (root->val > val){
         return SearchNode(root->left,val);
    }
    else {
        return SearchNode(root->right,val);
    }
}
void PreOrder(TreeNode * root){
    if (root!=NULL){
        cout<<root->val<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
    }
}
void BFS(TreeNode * root){
    queue <TreeNode *> q;
    TreeNode * tmp;
    q.push(root);   
    while (!q.empty()){
        tmp = q.front();
        cout<<tmp->val<<" ";
        if (tmp->left){
            q.push(root->left);
        }
        if(tmp->right){
            q.push(root->right);
        }
        q.pop();
    }
}

TreeNode * delOneNode(TreeNode * root, int val){
    if (root==NULL){
        return NULL;
    }
    if(root->val >val){
        root->left  = delOneNode(root->left,val);
    }
    else if (root->val<val){
        root->right = delOneNode(root->right,val);
    }
    else {
        // node can xoa la node la
        if(root->left ==NULL && root->right ==NULL){
            return NULL;
        }
        else if (root->left ==NULL && root->right !=NULL){
            return root->right;
        }
        else if (root->right ==NULL && root->left !=NULL){
            return root->left;
        }
        else {
            // xac dinh node lon nhat ben trai sau do thay the cho node can xoa
            TreeNode * tmp = root->left;
            while(tmp->right!=NULL){
                tmp = tmp->right;
            }
            root->val = tmp->val;
            root->left = delOneNode(root->left,tmp->val);
        }
    }
}

int main (){
    TreeNode * bst = NULL;
    // bst = push(bst,4);
    // bst = push(bst,5);
    bst=push(bst,6);
    bst=push(bst,7);
    bst =push(bst,8);
    bst = push(bst,4);
    push(bst,5);
    // PreOrder(bst);
    // BFS(bst);
    return 0;
}