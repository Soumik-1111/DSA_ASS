#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* root=NULL,*left,*right;

void creat_a_node(){
    root=NULL;
    left=NULL;
    right=NULL;
    int i,n,x;
    printf("Enter the element to creat a node: \n");
    scanf("%d",n);
    while (1)
    {
        
    }
    
}
struct node* creatnode(int data){
    struct node* n= (struct node* )malloc(sizeof(struct node));
    n->data= data;
    n->left= NULL;
    n->right=NULL;
    return n;
}

int main(){

    struct node* p= creatnode(3);
    struct node* p1= creatnode(1);
    struct node* p2= creatnode(2);

    p->left=p1;
    p->right=p2;
    return 0;
}

