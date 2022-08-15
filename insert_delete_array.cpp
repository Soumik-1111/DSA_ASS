#include <iostream>
using namespace std;

void insert(int size, int arr[])
{
    int element,position;
    cout << "Enter element you want to insert and position also :\n";
    cin >> element >> position;
    if(position<=0||position>size+1){
        cout<<"Invalid position.";
    }
    else{
        size++;
        for(int i=size-1;i>=position-1;i--){
            arr[i+1]=arr[i];
        }
        arr[position-1]=element;
        //size++;
        cout<<"Array after insertion :\n";
        for(int i=0;i<size;i++){
            cout<<arr[i];
            cout<<" ";
        }
    }
}

void delet(int size, int arr[])
{
    int position;
    cout << "Enter element position you want delete :\n";
    cin >> position;
    if (position <= 0 || position > size)
    {
        cout << "Invalid position.";
    }
    else
    {
        for (int i = position - 1; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
        cout << "Array after deletation :\n";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i];
            cout << " ";
        }
    }
}

int main()
{
    int n, element, position, choose;
    cout << "Enter the array size :\n";
    cin >> n;
    int arr[n];
    cout << "Enter array :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "You want to insert or delete element in array choose 1/2 :\n";
    cin >> choose;
    switch (choose)
    {
    case 1:
        insert(n, arr);
        break;
    case 2:
        delet(n, arr);
        break;
    default:
        cout << "wrong input.";
        break;
    }
}