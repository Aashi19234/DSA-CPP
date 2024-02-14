#include<iostream>
using namespace std;
int largestrowsum(int arr[][4], int row,int col)
{
    int max=INT16_MIN;
    int rowindex=-1;
    for(int row=0;row<3;row++){
    int sum=0;
    for(int col=0;col<4;col++){
        sum+=arr[row][col];
        
    }
    if(sum>max){
        max=sum;
        rowindex=row;

    }
    
    }
    cout<<"the maxium sum is"<<max<<endl;
    return rowindex;
}



//to print row wise sum
/*void printSum(int arr[][4], int row,int col){
    cout<<"printing the sum : ";
for(int row=0;row<3;row++){
    int sum=0;
    for(int col=0;col<4;col++){
        sum+=arr[row][col];
        
    }
    cout<<sum<<" ";

}
}*/


/*bool isPresent(int arr[][4], int target, int row,int col){
// in cpp we need to provide column numbers while initialsing the array
for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target){
                return 1;
            }

        }
    }
    return 0;
}*/
int main(){
    // basics of 2-d array
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];

        }
    }
    // taking input col wise

    /*for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[j][i];

        }
    }*///ispe pehle first col bharega then fir second col 
    //print
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<< " ";


        }
        cout<<endl;
    }
    // linear search
    // T.C-> O(m*n) m-> no.of rows n-> no.of column

    /*cout<<"Enter the element to search"<<endl;
    int target;
    cin>>target;
    if(isPresent(arr,target,3,4)){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }*/
    //hardcode values
    /*int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<< " ";


        }
        cout<<endl;
    }*/
    


    // if we have to decide which value we have to put in which row or column then:
    /*int arr[3][4]={{1,11,111,1111},{1234,3,4,5},{1,3,4,5}};

for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<< " ";


        }
        cout<<endl;
    }*/


// row-wise sum 
//printSum(arr, 3,4 );


// largest row sum-> jis row ka largest sum h vo dedo

cout<<"max row is at index"<< largestrowsum(arr,3,4)<<endl;
// it will give the index of row which has maximum sum


}