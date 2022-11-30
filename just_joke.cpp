#include<iostream>
using namespace std;

int main(){
    bool apu_love_me = true;
    cout<<"Enter your choice(0/1): \n";
    cin>>apu_love_me;
    if (apu_love_me == true){
        cout << printf("Me in your heart.\n");
    }else{
        cout << printf("I am busy with my work.\n");
    }

    return 0;
}