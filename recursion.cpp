#include<iostream>
using namespace std;
void merge(int arr[],int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first =new int[len1];// dynamic memory allocation
    int *second = new int[len2];
    // copy values
    int mainArrayindex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[ mainArrayindex++];
    }
     mainArrayindex=mid+1;
    for(int i=0;i<len2;i++ ){
        second[i]=arr[ mainArrayindex++];
    }
    // merge 2 sorted arrays
    int index1=0;
    int index2=0;
     mainArrayindex=s;
    while(index1<len1&&index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayindex++]=first[index1++];
        }
        else{
            arr[mainArrayindex++]=second[index2++];
        }
}
while(index1<len1){
    arr[mainArrayindex++]=first[index1++];
}
while(index2<len2){
    arr[mainArrayindex++]=second[index2++];
}
delete []first;// deletion of dynamically allocated memory
delete []second;

    






}
void mergesort(int arr[],int s,int e){
    if(s>=e) return;
    int mid=s+(e-s)/2;
    //solve left part
    mergesort(arr,s,mid);
    // solve right part
    mergesort(arr,mid+1,e);
    //merge 
    merge(arr,s,e);
}


// merge sort using recursion
int main(){
    int arr[6]={32,45,23,12,67,43};
    int n=6;
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}



/*void sortarray(int arr[],int n){
    if(n==0||n==1){
        return;
    }
    // 1 case solved-largest element at right place
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortarray(arr,n-1);
}

// bubble sort
int main(){
    int arr[5]={2,5,4,1,3};
    sortarray(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}*/


/*int power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1)
    return a;
    //recursive call
    int ans=power(a,b/2);
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}

int main(){
    int a,b;
    cin>>a >> b;
    int ans=power(a,b);
    cout<<"Answer is "<<ans<<endl;
}*/
/*bool checkPalindrome(string str,int i,int j){
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
}*/
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