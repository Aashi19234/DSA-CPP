#include<iostream>
using namespace std;
bool checkPalindrome(string str,int i,int j){
if(i>j){
    return true;
}
if(str[i]!=str[j])
return false;
else{
    return checkPalindrome(str,i+1,j-1);
}
}
int main(){
    string name="abcde";
    cout<<endl;
    bool ispalindrome=checkPalindrome(name,0,name.length()-1);
    if(ispalindrome){
        cout<<"its a palindrome"<<endl;
    }
    else{
        cout<<"its not a palindrome"<<endl;
    }
}
// recursion for strings
/*void reverse(string &str,int i,int j){// yaha hmne reference variable lia h kyuki agr hm bs str lenge toh ek copy bnegi and hmare main function m jo value di h usme changes ni hoega
    //base case
    if(i>j){
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    reverse(str,i,j);
}
int main(){
    string s="aastha";
    reverse(s,0,s.length()-1);
    cout<<endl;
    cout<<s<<endl;


}*/

// binary search
/*bool binarySearch(int arr[],int s,int e,int k){
    //base case
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k){
        return true;
    }
    
    if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,e,mid-1,k);
    }
}
int main(){
    int arr[5]={2,4,6,10,14};
    int size=5;
    int key=15;
    cout<<"present or not" <<" "<<binarySearch(arr,0,4,key)<<endl;;
    return 0;
}*/


/*bool isSorted(int arr[],int size){
    //base case
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remaining_part=isSorted(arr+1,size-1);
        return remaining_part;
    }

}
int main(){
    int arr[5]={2,4,6,8,9};
    int size=5;
    bool ans=isSorted(arr,size);
    if(ans){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
}*/
/*void reachhome(int src,int dest){
    //base case
    cout<<"source "<< src << " destination "<< dest <<endl;
    if(src==dest){
        cout<<"Reached";
        return;
    }
    //recursive call
    src++;
    reachhome(src,dest);

}
int main(){
    int dest=10;
    int src=1;
    reachhome(src,dest);
}*/
/*void print(int n){
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
}*/
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