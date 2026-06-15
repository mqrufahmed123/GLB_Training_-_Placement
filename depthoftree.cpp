#include <bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node* createTree(int data, Node* root){
    // Node* newNode = new Node(data);
    if(root == nullptr){
        return new Node(data);
    }   
    if(data < root->data){    
        root->left = createTree(data, root->left);
    }
    if(data > root->data){
        root->right = createTree(data, root->right);
    }
    return root;
}

void level_order(Node* root){
    queue<Node*> q;
    if(!root){
        return;
    }
    q.push(root);
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();

        cout<<curr->data<<" ";

        if(curr->left){
            q.push(curr->left);
        }
        if(curr->right){
            q.push(curr->right);
        }
    }
}

void inorder(Node* root){
    if(root == nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int depth(Node* root){
    if(root == nullptr){
        return 0;
    }
    return 1 + max(depth(root->left), depth(root->right));
}

int main(){
    Node* root = nullptr;
    root = createTree(10, root);
    root = createTree(20, root);
    root = createTree(30, root);
    root = createTree(11, root);
    root = createTree(12, root);
    root = createTree(19, root);
    
    inorder(root);
    cout<<"\nLevel order traversal: ";
    level_order(root);
    cout<<"\nMax depth: ";
    cout<< depth(root);

}