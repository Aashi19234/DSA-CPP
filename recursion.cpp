#include<iostream>
using namespace std;
void print(int n){
    if(n==0){
        return;
    }
    
    print(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    print(n);
}
/*int power(int n){
    if(n==0){
        return 1;
    }
    return 2*power(n-1);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int ans=power(n);
    cout<<ans;
}*/
/*int factorial(int n){
    //base case(if we will not write base case then segmentation fault will occur)
    if(n==0){
        return 1;
    }
    int issue=factorial(n-1);
    int sol=n*issue;
    return sol;

}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;
}*/