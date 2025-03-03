#include<iostream>
using namespace std;
int main(){
    int row,column,rownum,colnum,sum;
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

    cout<<"Enter row number: ";
    cin>>rownum;
    sum=0;
    for(int i = rownum ; i <= rownum ; i++){
        cout<<"Enter of row "<<rownum <<": ";
        for(int j = 0 ; j < column ; j++){
            cout<<a[i][j]<<", ";
            sum = sum + a[i][j];
        }
        cout<<endl;
    }
    cout<<"The sum of a row "<<rownum<<": "<<sum<<endl;

    cout<<"Enter column number: ";
    cin>>colnum;
    sum=0;
    cout<<"Enter of column "<<colnum <<": ";
    for(int i = 0 ; i < column ; i++){
        for(int j = colnum ; j <= colnum ; j++){
            cout<<a[i][j]<<", ";
            sum = sum + a[i][j];
        }
    }
    cout<<endl;
    cout<<"The sum of a column "<<colnum<<": "<<sum<<endl;

    return 0;
}