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

int maxHeight(Node * root){
    if(root == NULL) return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l,r)+ 1;
}

void level_order(Node * root, int x, int mx){
    if(root == NULL) return;
    queue <pair<Node*, int>> q;
    q.push({root, 0});
    if(mx < x){
        cout << "Invalid" << endl;
    }

   while (!q.empty())
   {
    // 1. Catch and leave the root;
    pair<Node*, int> f = q.front();
    q.pop();
    Node* node = f.first;
    int level = f.second;

    // 2. Complete all work.
    if(level == x){
        cout << node->value << " ";
    }

    // 3. Capture the children
    if(node->left) q.push({node->left, level + 1});
    if(node->right) q.push({node->right, level + 1});
   }

};



int main(){
    Node * root = input_tree();
    int x;
    cin >> x;
    if(root == NULL) return 0;
    int mx = maxHeight(root) - 1;
    level_order(root, x, mx);
    return 0;
}