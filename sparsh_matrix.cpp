#include<iostream>
using namespace std;
int main(){
    int arr[100][100],row,col,i,j,count=0;
    cout<<"Enter array row and column :\n";
    cin>>row>>col;
    cout<<"Enter the sparsh matrix :\n";
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The sparsh matrix is :\n";
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<arr[i][j];
            cout<<" ";
            if(arr[i][j]!=0){
                count++;
            }
        }
        cout<<"\n";
    }
    cout<<"The compact version of sparsh matrix is :\n";
    cout<<row<<" "<<col<<" "<<count<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(arr[i][j]!=0){
                cout<<i<<" "<<j<<" "<<arr[i][j]<<endl;
            }
        }
    }
    return 0;
}