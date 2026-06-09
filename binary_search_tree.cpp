#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

Node* insert(Node* root, int val){
    if(root == nullptr){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insert(root->left, val);
    }else{
        root->right = insert(root->right, val);
    }
    return root;
}

void levelOrder(Node* root){
    if(root == nullptr){
        return;
    }
    queue<Node*> q;
    q.push(root);

    

}

void inorder(Node* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    Node* root = nullptr;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        root = insert(root, val);
    }
    cout<<"Traversal: "<<endl;
    inorder(root);
}