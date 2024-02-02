#include<iostream>
using namespace std;
int sum(int arr[], int n){
    int summation=0;
    for(int i=0;i<n;i++){
        summation=summation+arr[i];
    }
    return summation;

}
int main(){
    
    
    int arr[4]={1,4,5,7};
    cout<<sum(arr,4)<<endl;

    
}