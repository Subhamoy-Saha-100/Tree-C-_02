#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this-> data = data;
        left = NULL;
        right = NULL;
    }
};

void left(Node* node,vector<int>&v){
    queue <Node*> q;
    q.push(node);
    while(q.empty() == false){
        int n = q.size();
        for(int i = 0;i < n;i++){
            Node* temp = q.front();
            q.pop();
            if(i == 0){
                v.push_back(temp->data);
            }
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
void bottom(Node* node,vector<int>&v){
    if (node == NULL) {
        return;
    }
    if(node->left == NULL && node->right == NULL){
        v.push_back(node->data);
        return;
    }
    
        bottom(node->left,v);

        bottom(node->right,v);

}
void right(Node* node,vector<int>&v){
    queue<Node*>q;
    q.push(node);
    while(q.empty() == false){
        int n = q.size();
        for(int i = 0;i < n;i++){
            Node* temp = q.front();
            q.pop();
            if(i == (n-1)){
                v.push_back(temp->data);
            }
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    Node* head1 = new Node(10);
    head1->left = new Node(20);
    head1->right = new Node(30);
    head1->left->left = new Node(40);
    head1->left->right = new Node(50);
    head1->left->right->left = new Node(90);
    head1->right->left = new Node(60);
    head1->right->left->right = new Node(80);

    
    

   
    
    return 0;
}