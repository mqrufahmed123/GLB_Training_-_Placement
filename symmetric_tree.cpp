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

bool isMirror(Node* left, Node* right){
    if(left == nullptr && right == nullptr){
        return true; // no asymmetry 
    }
    if(left == nullptr || right == nullptr){
        return false; // asymmetry occured
    }

    return (left->data == right->data) && isMirror(left->left, right->right) 
                                    && isMirror(left->right, right->right);
}

bool isSymmetric(Node* root){
    if(root == nullptr){
        return true;
    }
    return isMirror(root->left, root->right);
}

Node* createTree(int data, Node* root){
    // Node* newNode = new Node(data);
    queue<Node*> q;
    Node* newNode = new Node(data);
    if(root == nullptr){
        return newNode;
    }   
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp->left == nullptr){
            temp->left = newNode;
            return root;
        }else{
            q.push(temp->left);
        }
        
        if(temp->right == nullptr){
            temp->right = newNode;
            return root;
        }else{
            q.push(temp->right);
        }
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
    root = createTree(1, root);
    root = createTree(2, root);
    root = createTree(2, root);
    root = createTree(3, root);
    root = createTree(3, root);
    root = createTree(3, root);
    root = createTree(2, root);
    
    level_order(root);
    cout<<"\nMax depth: ";
    cout<< depth(root);
    
    cout<<"\nSymmetric: "<<isSymmetric(root);

}