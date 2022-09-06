#include<stdio.h>
#include<stdlib.h>  
void insert(); 
void dequeue();  
void display();  
int front = -1, rear = -1 ,maxsize;  
int queue[100];  
int main ()  
{  
    int choice;   
    printf("\n Enter the size of QUEUE : ");
    scanf("%d",&maxsize);
    printf("\n QUEUE OPERATIONS USING ARRAY");
    printf("\n1.insert an element\n2.Delete an element\n3.Display the circular queue\n4.Exit");  
    while(choice != 4)   
    {     
        printf("\nEnter your choice : ");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            insert();//enqueue  
            break;  
            case 2:  
            dequeue();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit(0);  
            break;  
            default:   
            printf("\nEnter valid choice??\n");  
        }  
    }
    return 0;
} 

void insert(){
    int item;  
    printf("\nEnter the element\n");  
    scanf("\n%d",&item);
    if((front == 0 && rear == maxsize -1) || (front == rear+1)){
        printf("Overflow.");
        return;
    }
    else if(front ==-1){
        front = rear = 0;
    }
    else if(rear = maxsize - 1 && front != 0){
        rear =0;
    }
    else{
        rear++;
    }
    queue[rear]= item;
    printf("\nValue inserted");
}

void dequeue(){
    int item;
    if(front ==-1){
        printf("Underflow.");
    }
    else if( front== rear){
        front = rear = -1;
    }
    else if(front == maxsize -1){
        front = 0;
    }
    else{
        front++;
    }
    printf("\nvalue deleted");
}

void display()  
{  
    int i;  
    if(rear == -1)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\n Elements in the circular queue are\n");  
        for(i=front;i<=rear;i++)  
        {  
            printf("\n%d",queue[i]);  
        }     
    }  
}