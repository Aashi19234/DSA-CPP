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
void insertatpos(node*&head,int position,int d){
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
    insertatpos(head,1,22);
    print(head);

}