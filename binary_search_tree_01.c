#include<stdio.h>
#include<malloc.h>
 
struct node{
    int data;
    struct node* left;
    struct node* right;
};

int stack[20];

struct node* createNode(int data){
    struct node *n; // creating a node pointer
    n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created node
}
 
void preOrder(struct  node* root){
    if(root!=NULL){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct  node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}
 
void inOrder(struct  node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
void inOrder_stack(struct  node* root){
    while (root!=NULL)
    {
        
    }
    
}

int isBST(struct  node* root){
    static struct node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

// void bstCheck(struct  node* root) {
//     if(isBST(p)){
//         printf("This is a bst" );
//     }
//     else{
//         printf("This is not a bst");
//     }
// }
// count oc leaf node

int countLeafNode(struct node *root){
    /* Empty(NULL) Tree */
    if(root == NULL)
        return 0;
    /* Check for leaf node */
    if(root->left == NULL && root->right == NULL)
        return 1;
    /* For internal nodes, return the sum of 
    leaf nodes in left and right sub-tree */
    return countLeafNode(root->left) + countLeafNode(root->right);
}
 
struct node * searchItem(struct node* root, int key){
    while(root!=NULL){
        if(key == root->data){
            return root;
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return NULL;
}
 
void insert(struct node *root, int key){
    struct node *prev = NULL;
    while(root!=NULL){
        prev = root;
        if(key==root->data){
            printf("Cannot insert %d, already in BST", key);
            return;
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    struct node* new = createNode(key);
    if(key<prev->data){
        prev->left = new;
    }
    else{
        prev->right = new;
    }
}

struct node *inOrderPredecessor(struct node* root){
    root = root->left;
    while (root->right!=NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *deleteNode(struct node *root, int value){

    struct node* iPre;
    if (root == NULL){
        return NULL;
    }
    if (root->left==NULL&&root->right==NULL){
        free(root);
        return NULL;
    }

    //searching for the node to be deleted
    if (value < root->data){
        root-> left = deleteNode(root->left,value);
    }
    else if (value > root->data){
        root-> right = deleteNode(root->right,value);
    }
    //deletion strategy when the node is found
    else{
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
}
 
int main(){
    struct node *root=createNode(5);

    int choice,num;

    while(1){
        printf("\n");
        printf("1. Insert\n2. Delete\n3. Inorder traversal\n4. Preorder traversal\n5. Postorder traversal\n6. Search an element.\n");
        printf("Enter your choice :\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter a number to insert :\n");
            scanf("%d", & num);
            insert(root,num);
            break;
        case 2:
            printf("Enter a number to delete :\n");
            scanf("%d", & num);
            deleteNode(root,num);
            break;
        case 3:
            inOrder(root);
            break;
        case 4:
            preOrder(root);
            break;
        case 5:
            postOrder(root);
            break;
        case 6:
            printf("Enter the number you want to search :\n");
            scanf("%d", &num);
            searchItem(root,num);
            break;
        default:
            printf("You have entered a wrong input.");
            break;
        }

    }
    return 0;
}

