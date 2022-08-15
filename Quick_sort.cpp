#include<iostream>
using namespace std;

int partition(int arr[],int l,int h){
    int pivot=arr[l];
    int i=l;
    int j=h;
    while(i<j){
        while(arr[i]<=pivot)
            i++;
        while (arr[j]>pivot)
            j--;
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[l]);
    return j;
}
void quick_sort(int arr[],int l,int h){
    if(l<h){
        int pivot=partition(arr,l,h);
        quick_sort(arr,l,pivot-1);
        quick_sort(arr,pivot+1,h);
    }
}

int main(){
     int n;
    cout<<"Enter array size :\n";
    cin>>n;
    int arr[n];
    cout<<"Enter array :\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
    cout<<"Array after Quick sort :\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
