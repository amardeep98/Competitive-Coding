#include <bits/stdc++.h>
#include<iostream>
#include<queue>
#include<map>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

class NodeWithPosition{
    public:
        Node* node;
        int hd;
        NodeWithPosition(Node* n, int val){
            node = n;
            hd = val;
        }
};

void TopView(Node* root);
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->left->right->left = new Node(65);
    root->right->right = new Node(64);
    root->right->right->right = new Node(68);
    TopView(root);
    return 0;
}

void TopView(Node* root){
    int HD = 0;
    NodeWithPosition* rootNode = new NodeWithPosition(root, HD);
    queue<NodeWithPosition*> nq;
    queue<Node*> q;
    map<int, int> topNodes;
    nq.push(rootNode);
    q.push(root);

    while(nq.size()){
        HD = rootNode->hd;
        if(topNodes.count(HD) == 0){
            topNodes[HD] = rootNode->node->data;
        }

        if(root -> left){
            rootNode = new NodeWithPosition(root->left, HD-1);
            nq.push(rootNode);
            q.push(root->left);
        }

        if(root->right){
            rootNode = new NodeWithPosition(root->right, HD+1);
            nq.push(rootNode);
            q.push(root->right);
        }
        nq.pop();
        q.pop();
        rootNode = nq.front();
        root = q.front();
    }

    for(auto i : topNodes)
        cout<<i.second<<' ';
}