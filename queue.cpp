#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(7);
    cout<<"Front of queue is "<<q.front()<<endl;
    q.push(76);
    q.push(6);
    cout<<"Size of queue is "<<q.size()<<endl;
    q.pop();
    cout<<"size of queue is "<<q.size()<<endl;
    cout<<"Front of queue is "<<q.front()<<endl;
    

    
}