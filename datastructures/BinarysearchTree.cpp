#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* left;
    Node* right;

    Node(int val){
        this -> data = val;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* Insert(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }

    if(root->data > val){
        root->left = Insert(root->left, val);
    }else{
        root->right = Insert(root->right, val);
    }

    return root;
}

Node* takeInput(Node* root){
    int data;
    cout << "Enter root Node: "<< "\n";
    cin >> data;

    while(data != -1){
        root = Insert(root, data);
        cout << "Enter data: " << "\n";
        cin >> data;
    }

    return root;
}

Node* deletenode(Node* root, int val){
    if(root == NULL){
        return NULL;
    }

    if(root->data > val){
        root->left = deletenode(root->left, val);
        return root;
    }else if(root->data < val){
        root->right = deletenode(root->right, val);
        return root;
    }else{
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }else if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp; 
        }else if(root->right == NULL && root->left != NULL){
            Node* temp = root->left;
            delete root;
            return temp; 
        }else{
            Node* temp = root->right;
            while(temp->left != NULL){
                temp = temp->left;
            }

            root->data = temp->data;
            
            root->right = deletenode(root->right, temp->data);
        }
    }

    return root;
}

void Inorder(Node* root){
    if(root == NULL){
        return;
    }

    Inorder(root -> left);
    cout << root -> data << " ";
    Inorder(root -> right);
}

void Postorder(Node* root){
    if(root == NULL){
        return;
    }

    Postorder(root -> left);
    Postorder(root -> right);
    cout << root -> data << "->";
}

void Preorder(Node* root){
    if(root == NULL){
        return;
    }

    cout << root -> data << "->";
    Preorder(root -> left);
    Preorder(root -> right);
}

void levelorder(Node* root, vector<vector<int>>& v) { 
    if (root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size(); 
        vector<int> level;

        for (int i = 0; i < size; i++) {
            Node* curr = q.front();
            q.pop();

            level.push_back(curr->data);

            if (curr->left != NULL) {
                q.push(curr->left);
            }

            if (curr->right != NULL) {
                q.push(curr->right);
            }
        }

        v.push_back(level);
    }
}

int main(){
    Node* root = NULL;

    root = takeInput(root);

    Inorder(root);

    deletenode(root, 5);
    cout <<"\n";

    Inorder(root);
}