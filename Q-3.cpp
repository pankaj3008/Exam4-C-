#include<iostream>
using namespace std;
int main(){
    int rowNcol;
    cout<<"Enter the array's row & column size: ";
    cin>>rowNcol;

    int a[rowNcol][rowNcol];
    int i , j ;

    cout<<"Enter array's elements:"<<endl;
    for(i = 0 ; i < rowNcol ; i++){
        for(j = 0 ; j < rowNcol ; j++){
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    }
    cout<<"The transpose matrix of an array :"<<endl;

    for(i = 0 ; i < rowNcol ; i++){
        for(j = 0 ; j < rowNcol ; j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}