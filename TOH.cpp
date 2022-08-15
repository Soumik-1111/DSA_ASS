#include<iostream>
using namespace std;

void TOH(int n,char start,char medium,char end){
    if(n>=1){
        TOH(n-1,start,end,medium);
        cout << "Move disk " << n << " from rod " << start <<" to rod " << end << endl;
        TOH(n-1,medium,start,end);
    }
}

int main(){

    int n;
    char start,medium,end;
    cout<<"Enter number of disk available in towers :"<<endl;
    cin>>n;
    cout<<"Enter Name of tower :"<<endl;
    cin>>start>>medium>>end;
    TOH(n,start,medium,end);
}
