#include<iostream>
using namespace std;
int main(){
    //int num=5;
    //cout<<"Address of num is "<<&num<<endl;*/
    /*int *ptr=&num;
    cout<<"value is: "<<*ptr<<endl;
    cout<<"Address is "<<ptr<<endl;
    double d=4.2;
    double *p=&d;
    cout<<"value is "<<*p<<endl;
    cout<<"size of integer is "<<sizeof(num)<<endl;
    cout<<"size of ptr is "<<sizeof(ptr)<<endl;
    cout<<"size of p is"<<sizeof(p)<<endl;*/
    //int *p;
    //cout<<*p<<endl;//garbage value
    //agr kbhi koi pointer null ko point krra hoega toh segmentation fault aa jaega
    //int *a=0;
    //cout<<*a<<endl;
    /*int i=8;
    int *p=0;//another way of initialising pointer agar hm *p=&i krenge toh bhi same hoega

    p=&i;
    cout<<p<<endl;
    cout<<*p<<endl;*/


    int num=5;
    int a=num;
    a++;
    cout<<num<<endl;// no change in value
    int *p=&num;
    cout<<"before "<<num<<endl;
    (*p)++;//same box mei increment hora h
    cout<<"after "<<num<<endl;

    int *q=p;// copying a pointer
    cout<<p<<"-"<<q<<endl;
    cout<<*p<<"-"<<*q<<endl;

    



    
    








    return 0;
}