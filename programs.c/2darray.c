#include<stdio.h>
int main(){
    int arr[22][23],r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of column: ");
    scanf("%d",&c);

    printf("Enter the element of the array:\n ");

    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j<c ; j ++){
            printf("Enter the element for [%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j<c ; j ++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0 ;
}