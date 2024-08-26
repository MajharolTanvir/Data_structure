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

void insert_in_bst(Node * &root, int x){
    if(root== NULL) {
        root = new Node(x); 
        return;
    }
    if(x < root->value){
        if(root->left == NULL){
            root->left = new Node(x);
        }
        else {
            insert_in_bst(root->left, x);
        }
    }
    else if(x > root->value){
        if(root->right == NULL){
            root->right = new Node(x);
        }
        else {
            insert_in_bst(root->right, x);
        }
    }
}

void level_order(Node * root){
    if(root == NULL) return;
    queue <Node*> q;
    q.push(root);

   while (!q.empty()) 
   {
    // 1. Catch and leave the root;
    Node* f = q.front();
    q.pop();

    // 2. Complete all work.
    cout << f->value << " ";

    // 3. Capture the children
    if(f->left) q.push(f->left);
    if(f->right) q.push(f->right);
   }
};

int main( ) {
    Node * root = input_tree(); 
    int x;
    cin >> x;
    insert_in_bst(root, x);
    level_order(root);
    return 0;
}