#include<iostream>
using namespace std;

// void bubble_sort(int arr[],int size){
//     int round,temp,flag;
//     for(int round=1;round<=size-1;round++){
//         flag=0;
//         for(int i=0;i<=size-1-round;i++){
//             if(arr[i]>arr[i+1]){
//                 temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//                 flag=1;
//             }
//         }
//         if(flag==0)
//            break;
//     }
//     cout<<"Array after bubble sort :\n";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void selection_sort(int arr[],int size){
//     int temp;
//     for(int i=0;i<size-1;i++){
//         int min=i;
//         for(int j=i+1;j<size;j++){
//             if(arr[j]<arr[min]){
//                 min=j;
//             }
//         }
//         swap(arr[min],arr[i]);
//     }
//     cout<<"Array after selection sort :\n";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void insertion_sort(int arr[],int size){
//     int temp,i,j;
//     for(i=1;i<size;i++){
//         temp=arr[i];
//         j=i-1;
//         while(j>=0 && arr[j]>temp){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=temp;
//     }
//     cout<<"Array after insertion sort :\n";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

int main(){
    int n;
    cout<<"Enter array size :\n";
    cin>>n;
    int arr[n];
    cout<<"Enter array :\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // bubble_sort(arr,n);
    // selection_sort(arr,n);
    // insertion_sort(arr,n);
    
}