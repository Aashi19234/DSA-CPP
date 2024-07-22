#include<iostream>
#include<queue>
using namespace std;


class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

void levelordertraversal(Node*root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        if(temp==NULL){// purana level complete traverse ho chuka
        cout<<endl;
        if(!q.empty()){// queue still has some child nodes
            q.push(NULL);
        }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);

            }
            if(temp->right){
                q.push(temp->right);
            }
        }

        

    }
}
Node* insertintoBST(Node*root,int d){
    // base case: root initally NULL hai toh jo pehla data aaega usko node bnake root krdenge
    if(root==NULL){
        root = new Node(d);
        return root;
    }
if(d>root->data){
    root->right=insertintoBST(root->right,d);
}
else{
    root->left=insertintoBST(root->left,d);
}

}
void takeinput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root = insertintoBST(root,data);
        cin>>data;
    }
}


Node*minval(Node*root){
    Node*temp=root;
    while(temp!=NULL){
        temp=temp->left;
    }
    return temp;
}

Node*maxval(Node*root){
    Node*temp=root;
    while(temp!=NULL){
        temp=temp->right;
    }
    return temp;
}
Node*deletefrombst(Node*root,int val){
    // base case
    if(root==NULL){
    return root;}
    if(root->data==val){
        // 0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        // 1 child
        if(root->left!=NULL && root->right==NULL){
            Node*temp=root->left;
            delete root;
            return temp;

        }
        if(root->left==NULL && root->right!=NULL){
            Node*temp=root->right;
            delete root;
            return temp;
        }
        // 2 child
        if(root->left!=NULL && root->right!=NULL){
            int minimum=minval(root->right)->data;
            root->data=minimum;
            root->right=deletefrombst(root->right,minimum);

        }
    }
    if(root->data>val){
        root->left=deletefrombst(root->left,val);
        return root;
    }
    else{
        root->right=deletefrombst(root->right,val);
        return root;
    }
}



int main(){

Node*root=NULL;
cout<<"Enter data to create BST"<<endl;
takeinput(root);

cout<<"Printing the bst"<<endl;
levelordertraversal(root);


root=deletefrombst(root,30);


cout<<"Printing the bst"<<endl;
levelordertraversal(root);
return 0;


}
