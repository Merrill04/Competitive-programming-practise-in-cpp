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

Node* createTree(Node* root){
    if (root == NULL) {
        cout << "Enter the data: ";
        int data;
        cin >> data;
        root = new Node(data);
    }

    bool flag;
    cout << "Do you want to enter data in left part of " << root -> data << ": ";
    cin >> flag;
    if(flag == true){
        root -> left = createTree(root -> left);
    }

    cout << "Do you want to enter data in right part of " << root -> data << ": ";
    cin >> flag;
    if(flag == true){
        root -> right = createTree(root -> right);
    }

    return root;
}

void Preorder(Node* root){//Print then go left and then go right
    if(root == NULL){
        return;
    }

    cout << root -> data << "->";
    Preorder(root -> left);
    Preorder(root -> right);
}

void Inorder(Node* root){//go left then print and then go right
    if(root == NULL){
        return;
    }

    Inorder(root -> left);
    cout << root -> data << "->";
    Inorder(root -> right);
}

void Postorder(Node* root){//go left and go right and then print
    if(root == NULL){
        return;
    }

    Postorder(root -> left);
    Postorder(root -> right);
    cout << root -> data << "->";
}

void levelorder(Node* root, vector<vector<int>>& v) { //BFS
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

int heightoftree(Node* root){
/*  Calculating Height of tree using iterative approach(BFS).  
    if(root == NULL){
        return 0;
    }

    int height = 0;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int temp = q.size();

        for(int i = 0; i < temp; i++){
            Node* curr = q.front();
            q.pop();

            if(curr->left != NULL){
                q.push(curr->left);
            }

            if(curr->right != NULL){
                q.push(curr->right);
            }
        }

        height++;
    }

    return height;
*/
// This is the recursive approach(DFS).

    if(root == NULL){
        return 0;
    }

    int left = heightoftree(root->left);
    int right = heightoftree(root->right);

    return 1 + max(left, right);
}

/*This is the Iterative code for determining level of the given node.
int levelofNode(Node* root, int data){
    if(root == NULL){
        return -1;
    }

    int level = 0;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int temp = q.size();

        for(int i = 0; i < temp; i++){
            Node* curr = q.front();
            q.pop();

            if(curr->data == data){
                return level;
            }

            if(curr->left != NULL){
                q.push(curr->left);
            }

            if(curr->right != NULL){
                q.push(curr->right);
            }
        }

        level++;
    }

    return -1;
}
*/

//This is recurive approach.
int levelofNode(Node* root, int data, int level){
    if(root == NULL){
        return -1;
    }

    if(root->data == data){
        return level;
    }

    int left = levelofNode(root->left, data, level + 1);
    if(left != -1){
        return left;
    }

    return levelofNode(root->right, data, level + 1);
}

int main(){
    Node* root = NULL;

    root = createTree(root);
/*    
    Preorder(root);
    cout << "NULL" << "\n";

    Postorder(root);
    cout << "NULL" << "\n";

    Inorder(root);
    cout << "NULL" << "\n";

    vector<vector<int>> v;
    levelorder(root, v);

    for(int i = 0; i < v.size(); i++){
        cout << "[ ";
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << "]" << "\n";
    }

    cout << heightoftree(root);
*/
    cout << levelofNode(root, 5, 0);
    return 0;
}