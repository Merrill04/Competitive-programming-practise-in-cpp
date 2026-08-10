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
        if(root->left == NULL && root->right == NULL){//the node to be deleted has 0  child than delete directly and return null
            //so that the returned null value will get joined to the values above during return call.
            delete root;
            return NULL;
        }else if(root->left == NULL && root->right != NULL){//If the node to be deleted contains right part and left is null then
            //store nodes right part in temp and delete the node and then return temp. while returning the temp will be joined to 
            //the node above.
            Node* temp = root->right;
            delete root;
            return temp; 
        }else if(root->right == NULL && root->left != NULL){//similar as above like left present and right is null than do same
            Node* temp = root->left;
            delete root;
            return temp; 
        }else{//If both the right and left parts are present than there are two options. Go to left of the node. Then go to
            //extreme right of the left part using while loop. by doing this will get the maximum from left part and than  
            //swap the values of the node to be deleted and the maximum node found in left part. after swapping we also need to 
            // delete the node that we found. So again call delete function and pass root -> left, and the data with which we swapped.
            //That node will contain zero child as it was at extreme right of left part and then get deleted using our first case.

            //Option 2 is go to node -> right and the using while loop find the minimum from the right part and do as above. 
            //The code below is following option 2 itself.
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

int minimuminBST(Node* root){
    int min = root -> data;

    while(root -> left != NULL){
        min = root -> left -> data;
        root = root -> left;
    }

    return min;
}

int maximuminBST(Node* root){
    int max = root -> data;

    while(root -> right != NULL){
        max = root -> right -> data;
        root = root -> right;
    }

    return max;
}

int main(){
    Node* root = NULL;

    root = takeInput(root);

    Inorder(root);

    //deletenode(root, 5);
    cout <<"\n";

    int min = minimuminBST(root);
    int max = maximuminBST(root);

    cout << min << " " << max;

    //Inorder(root);

    return 0;
}