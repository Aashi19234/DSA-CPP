//check palindrome
#include<iostream>
using namespace std;
/*bool checkPalindrome(char a[], int n){
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
}*/
//string compression
class Solution {
public:
    int compress(int chars[]) {
        int i=0;
        int ansIndex=0;
        int n;
     
        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            chars[ansIndex++]=chars[i];
            int count=j-i;
            if(count>1){
                string ct= to_string(count);
                for( char ch: ct){
                    chars[ansIndex++]= ch;
                }
            }
            i=j;

        }
        return ansIndex;
        
    }
};
