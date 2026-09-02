#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
        TrieNode* children[26];//Every node in trie contains 26 children TrieNodes that is 26 alphabets.
        bool isleaf;//This is to check if the node is the last letter of the word.

        TrieNode(){
            for(int i = 0; i < 26; i++){
                children[i] = nullptr;
            }

            isleaf = false;
        }

        void insertintrie(TrieNode* root, string word);
        bool searchintrie(TrieNode* root, string word);
};

void TrieNode :: insertintrie(TrieNode* root, string word){
    if(word.length() == 0){
        root -> isleaf = true;
        return;
    }

    if(root -> children[word[0] - 'a'] == nullptr){
        TrieNode* node = new TrieNode();
        root -> children[word[0] - 'a'] = node;
    }

    insertintrie(root -> children[word[0] - 'a'], word.substr(1));
}

bool TrieNode :: searchintrie(TrieNode* root, string word){
    if(word.length() == 0){
        return root -> isleaf;
    }

    if(root -> children[word[0] - 'a'] == nullptr){
        return false;
    }

    return searchintrie(root -> children[word[0] - 'a'], word.substr(1));
}

int main(){
    TrieNode* root = new TrieNode();
    
    string a = "dog";
    string b = "cat";
    string c = "man";

    root -> insertintrie(root, a);
    root -> insertintrie(root, b);
    root -> insertintrie(root, c);

    bool ans1 = root -> searchintrie(root, "do");
    bool ans2 = root -> searchintrie(root, "dog");

    cout << ans1 << "\n";
    cout << ans2;
}