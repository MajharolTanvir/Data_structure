#include <bits/stdc++.h>
using namespace std;

class Node {
    public: 
        int value;
        Node* left;
        Node* right;
        Node(int value){
            this->value = value;
            this->left = NULL;
            this->right= NULL;
        }
};

Node* input_tree(){

    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue <Node*> q;
    if(root) q.push(root);

    while(!q.empty()) {
        // 1. Catch and leave root; 
        Node* p = q.front();
        q.pop();

        // 2. Complete all work;
        int left, right;
        cin >> left >> right;

        Node * newLeft;
        Node * newRight;

        if(left == -1) newLeft = NULL;
        else newLeft = new Node(left);

        if(right == -1) newRight = NULL;
        else newRight = new Node(right);

        p->left = newLeft;
        p->right = newRight;

        // 3. Capture the children;
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}


void pre_order(Node * root,vector<int> &v){    

    if(root == NULL) return;
    if(root->left) pre_order(root->left, v);
    if(root->right) pre_order(root->right, v);
    if(root->left == NULL && root->right == NULL){
        v.push_back(root->value);
    }
}


int main(){
    Node * root = input_tree();
    if(root == NULL) return 0;
    vector<int> v;
    pre_order(root, v);
    sort(v.begin(),v.end(), greater<int>());
    for(auto it = v.begin(); it < v.end(); it++){
        cout << *it << " ";
    }
    return 0;
}