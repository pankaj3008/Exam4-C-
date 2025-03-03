#include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"Enter the array's row size: ";
    cin>>row;
    cout<<"Enter the array's column size: ";
    cin>>column;

    int a[row][column];
    int i , j ;

    cout<<"Enter array's elements:"<<endl;
    for(i = 0 ; i < row ; i++){
        for(j = 0 ; j < column ; j++){
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    }
    int largest = 0 ;
    for(i = 0 ; i < row ; i++){
        for(j = 0 ; j < column ; j++){
            if(a[i][j] > largest){
                largest = a[i][j];
            }
        }
    }
    cout<<"The largest element is : "<<largest;
    return 0;
}