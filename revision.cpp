#include<iostream>
using namespace std;
/*int sum(int arr[], int n){
    int summation=0;
    for(int i=0;i<n;i++){
        summation=summation+arr[i];
    }
    return summation;

}
int main(){
    
    
    int arr[4]={1,4,5,7};
    cout<<sum(arr,4)<<endl;

    
}*/
int main(){
    int n= 1234; int sum=0;
    int product=1;
    while(n!=0){
        int digit=n%10;
        product=product*digit;
        sum=sum+digit;
        n=n/10;
    }
    int ans=product-sum;
    return ans;
}

