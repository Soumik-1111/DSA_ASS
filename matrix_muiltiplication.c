#include<stdio.h>
#define N 50

int main(){
    int a[N][N],b[N][N],c[N][N],i,j,m,n,p,q,sum;
    printf("Enter the 1st matrix row & column :");
    scanf("%d %d",&m,&n);
    printf("Enter the 1st matrix :");
    for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d",&a[i][j]);
            }
    }
    printf("Enter the 2nd matrix row & column :");
    scanf("%d %d",&p,&q);
    printf("Enter the 2nd matrix :");
    for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                scanf("%d",&b[i][j]);
            }
    }
    printf("The 1st matrix is : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d " , a[i][j]);
        }
        printf("\n");
    }
    printf("\nThe 2nd matrix is : \n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%d " , b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    if(n!=p){
        printf("Can not multiply");
    }
    else{
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                sum=0;
                for(int k=0;k<m;k++){
                    sum=sum+(a[i][k]*b[k][j]);
                }
                c[i][j]=sum;
            }
        }
        printf("The multiplcation is:\n");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}