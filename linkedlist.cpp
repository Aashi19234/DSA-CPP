
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
//singly circular linked lists
void insertnode(node*&tail,int element,int d){
    // assuming that elelemnt is present in list
    if(tail==NULL)// empty list
    {
        node*newnode= new node(d);
        tail=newnode;
        newnode->next=newnode;

    }
    else{
        // non empty list
        node*curr=tail;
        while(curr->data!=element){
            curr=curr->next;

        }
        // element found- curr is representing element value
        node*temp=new node(d);
        temp->next=curr->next;
        curr->next=temp;

    }
}

// insertion in singly linked lists
void insertathead(node*&head,int d){// why we have taken a reference?-> bcoz hme copy ni create krni jo original ll h usme hi changes krne hai

    // new node create
    node*temp=new node(d);
    temp->next=head;
    head=temp;
}
void printt(node*&tail){
    node*temp=tail;
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    // do-while loop use krenge kyuki vo atleast ek baari execute hoega kyuki single element n print hoega normal loop se
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
    cout<<endl;

}
void deleteval(node*&tail,int value){
    //empty list
    if(tail==NULL){
        cout<<"list is empty,please try again!!"<<endl;
        return;
    }
    else{
        //non-empty
        //assuming value is present in linked list
        node*prev=tail;
        node*curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        // 1-node linked list
        if(curr==prev){
            tail=NULL;
        }
        //>2 nodes linked list
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete(curr);

    }

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
    //node*node1=new node(10);
    // node is created

    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    //head pointer to node1
    //node*head=node1;
    // tail pointer to node1
    node*tail=NULL;
    /*print(head);
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
    cout<<"tail "<<tail->data<<endl;*/



    // empty list print krre h
    insertnode(tail,5,3);
    printt(tail);
    insertnode(tail,3,5);
    printt(tail);
    //insertnode(tail,3,4);
    //printt(tail);
    deleteval(tail,3);
    printt(tail);



}

// doubly linked lists

/*#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*prev;
    node*next;
    node(int d){
        this->data=d;
        this->next-NULL;
        this->prev=NULL;
    }
    ~node(){
    int value=this->data;
    if(next!=NULL){
        delete next;
        next=NULL;
    }
    cout<<"Memory free for data: "<<value<<endl;


    }
};


    void print(node*&head){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }




    int getlength(node*head){
        int len=0;
        node*temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        cout<<len;
       
    }



    void insertathead(node*&head,int d)
    {
        if(head==NULL){
            node*temp=new node(d);
            head=temp;

        }
        else{
node*temp=new node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
        }
        
    }
void insertattail(node*&tail,int d){
    if(tail==NULL){
        node*temp=new node(d);
        tail=temp;

    }
    else{

node*temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
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
    node*nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    nodetoinsert->prev=temp;
    temp->next=nodetoinsert;
}
// deletion in doubly ll

void deletenode(node*&head,node*&tail,int position){
    if(position==1){
        node*temp=head;
        // deleting first node
        temp->next->prev=NULL;
        head=temp->next;
         
        temp->next=NULL;


        // memory delete

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
        current->prev=NULL;

        prev->next=current->next;
        current->next->prev=prev;
        current->next=NULL;
        
        delete current;
        
    }
}







int main(){
    node*node1=new node(10);
    node*head=node1;
    print(head);
    node*tail=node1;
   
   insertathead(head,11);
   print(head);
   insertattail(tail,8);
   print(head);
   
   insertatpos(tail,head,2,4);
   print(head);
   deletenode(head,tail,1);
   cout<<"head "<<head->data<<endl;
   cout<<"tail "<<tail->data<<endl;

}*/
// code yaha pr pta ni kyu ni chlra online complier m toh sahi chlra h toh abhi chhodho run ka online compiler m krlenge run