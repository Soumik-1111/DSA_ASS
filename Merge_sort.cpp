#include<iostream>
using namespace std;

void merge(int arr[],int b[],int lower,int mid,int upper){
    int i=lower;
    int j= mid+1;
    int k=lower;
    while(i<=mid&& j<=upper){
        if(arr[i]<arr[j]){
            b[k]=arr[i];
            i++;
        }
        else{
            b[k]=arr[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=upper){
            b[k]=arr[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=mid){
          b[k]=arr[i];
          i++;
          k++;  
        }
    }
    for(k=lower;k<=upper;k++){
        arr[k]=b[k];
    }
}


void Merge_sort(int arr[],int b[],int lower,int upper){
    if(lower<upper){
        int mid=(lower+upper)/2;
        Merge_sort(arr,b,lower,mid);
        Merge_sort(arr,b,mid+1,upper);
        merge(arr,b,lower,mid,upper);
    }
}

int main(){
    int n;
    cout<<"Enter array size :\n";
    cin>>n;
    int arr[n];
    int b[n];
    cout<<"Enter array :\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Merge_sort(arr,b,0,n-1);
    cout<<"Array after Merge sort :\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}