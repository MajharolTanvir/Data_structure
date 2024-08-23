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


int level_order(Node * root, int &rootValue){
    if(root == NULL) return 0;
    if(root->left || root->right) {
        rootValue = rootValue + root->value;
    }
    level_order(root->left, rootValue);
    level_order(root->right ,rootValue);
    return rootValue;
}

int main(){
    Node * root = input_tree();
    if(root == NULL) return 0;
        int rootValue = 0;
        level_order(root, rootValue);
    cout << rootValue << endl;
   return 0;
}