#include<iostream>
#include<vector>
using namespace std;
// height ofn tree means max dist from root to leaf
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
static int idx=-1;
Node* buildTree(vector<int> preorder){
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }
    Node *root=new Node(preorder[idx]);
    root->left=buildTree(preorder);
    root->right=buildTree(preorder);
    return root;
}
// tree heigth
int height(Node *root){
    if(root==NULL) return 0;
    int leftht=height(root->left);
    int rightht=height(root->right);
    return max(leftht,rightht)+1;
}
// count the node of the binary tree
int countNode(Node* root){
    if(root==NULL) return 0;
    int leftcount=countNode(root->left);
    int rightcount=countNode(root->right);
    return leftcount+rightcount+1;
}
// sum of node
int sum(Node* root){
    if(root==NULL)return 0;
    int leftsum=sum(root->left);
    int rightsum=sum(root->right);
    return leftsum + rightsum + root->data;
}
int main(){
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node*root=buildTree(preorder);
    // cout<<root->data;
    // int val=height(root);
    // cout<<val;
    // int node=countNode(root);
    // cout<<node;
    cout<<"sum"<<sum(root);
    return 0;
}