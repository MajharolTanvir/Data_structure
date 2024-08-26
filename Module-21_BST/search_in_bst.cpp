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

bool search_value (Node * root, int x){
    if(root == NULL) return false;
    if(x < root->value){
        return search_value(root->left, x);
    }
    else if(x > root->value){
        return search_value(root->right, x);
    }
}


int main( ) {
    Node * root = input_tree(); 
    int x;
    cin >> x;
    if(search_value(root, x)){
        cout << "Found search value" << endl;
    }
    else {
        cout << "Search value not found" << endl;
    }
    return 0;
}