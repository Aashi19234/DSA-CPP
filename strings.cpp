//check palindrome
#include<iostream>
using namespace std;
bool checkPalindrome(char a[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
        
    }
    return 1;
}
int main(){
    char name[7]="Aastha";
    cout<<checkPalindrome(name,7);
    return 0;
}
