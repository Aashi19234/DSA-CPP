#include<iostream>
using namespace std;
void update2(int &k){
    k++;
}
void update(int n){
    n++;
}
int main(){
    /*int i=5;
    //create a ref variable
    int &j=i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<j<<endl;
    cout<<i<<endl;*/
    int n=5;
    cout<<"Before "<<n<<endl;
    update(n);
    cout<<"After "<<n<<endl;
    //no change in value because copy create hui h toh iss value m changes ni hue pass by value ka concept h new memory create krri h
int k=8;
cout<<"Before "<<k<<endl;
update2(k);
cout<<"After "<<k<<endl;// pass by reference
 // yaha hmne ek reference variable create kia h toh same memory  m changes hre h and this is called pass by reference   

}
