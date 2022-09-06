#include<stdio.h>

void tower_of_hanoi(char source,char helper, char destination,int n){
    if(n==1)
    {
        printf("From %c to %c\n",source,destination);
        return;
    } else {
        tower_of_hanoi(source,destination,helper,n-1);
        tower_of_hanoi(source,helper,destination,1);
        tower_of_hanoi(helper,source,destination,n-1);
    }
}

int main()
{
    int N;
    printf("Enter the number of disks:\n");
    scanf("%d",&N);
    tower_of_hanoi('A','B','C',N);
}