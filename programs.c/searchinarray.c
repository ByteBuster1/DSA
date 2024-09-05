#include<stdio.h>
int main(){
    int key,arr[100],n,i;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter the element of the array: ");
    
    for(i = 0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
      printf("Enter the key : ");
      scanf("%d",&key);
    for( i=0;i<n;i++){
        if(arr[i]==key){
            printf("Element found at index : %d",i);
            break;
        }
    }
    if(i==n){
        printf("Element not found");
    }

    return 0 ;

}