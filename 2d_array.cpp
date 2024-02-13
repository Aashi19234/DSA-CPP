#include<iostream>
using namespace std;
int main(){
    // basics of 2-d array
    //int arr[3][4];
    /*for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];

        }
    }*/
    // taking input col wise

    /*for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[j][i];

        }
    }//ispe pehle first col bharega then fir second col 
    //print
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<< " ";


        }
        cout<<endl;
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
    int arr[3][4]={{1,11,111,1111},{1234,3,4,5},{1,3,4,5}};

for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<< " ";


        }
        cout<<endl;
    }

}