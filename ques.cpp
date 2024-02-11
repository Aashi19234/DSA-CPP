#include<iostream>
using namespace std;
void reverse(char arr[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main(){
    /*int sum=0;
    int arr[4]={3,5,6,8};
    for(int i=0;i<4;i++){
        sum=sum+=arr[i];

    }
    cout<<sum;*/
    /*char name[7]="Aastha";
    int count =0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    cout<<count;*/
    char arr[7]="Aastha";
    
    
    


}