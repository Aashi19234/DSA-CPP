#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int arr[4]={3,5,6,8};
    for(int i=0;i<4;i++){
        sum=sum+=arr[i];

    }
    cout<<sum;
}