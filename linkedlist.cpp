#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;// pointer node ko point krra h toh node type ho gya and uska name next ho gya

    // constructor 
    node(int data){
        this->data=data;
        this->next=NULL;
    }
    // destructor
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            // memory free
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data"<< value<<endl;

    }


};
// insertion
void insertathead(node*&head,int d){// why we have taken a reference?-> bcoz hme copy ni create krni jo original ll h usme hi changes krne hai

    // new node create
    node*temp=new node(d);
    temp->next=head;
    head=temp;
}

void print(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertattail(node*&tail,int d){
    node*temp=new node(d);
    tail->next=temp;
    tail=temp;
    



}
void deletenode(int position,node*&head,node*&tail){
    if(position==1){
        node*temp=head;
        // deleting first node
        head=head->next;
        // memory delete 
        temp->next=NULL;
        delete temp;




    }
    else{
        // deleting midddle or last node
        node*current=head;
        node*prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=current;
            current=current->next;
            cnt++;
        }
        if(current->next==NULL){
            tail=prev;
        }

        prev->next=current->next;
        current->next=NULL;
        
        delete current;
        
    }
}
void insertatpos(node*&tail,node*&head,int position,int d){
    if(position==1){
        insertathead(head,d);
        return;
    }
    node*temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    // inserting at last pos
    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }
    // creatung a node for d
    node*nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;


}


int main(){
    node*node1=new node(10);
    // node is created

    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    //head pointer to node1
    node*head=node1;
    // tail pointer to node1
    node*tail=node1;
    print(head);
    insertattail(tail,12);
    print(head);
    insertattail(tail,15);
    print(head);
    insertatpos(tail,head,4,22);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    deletenode(4,head,tail);
    print(head);
    cout<<"tail "<<tail->data<<endl;


}