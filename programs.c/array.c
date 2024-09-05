#include<stdio.h>
int main(){
    int arr[100],n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter the element of the array: ");
    
    for(int i = 0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }

    printf("Array element: \n");
    for(int i = 0 ; i<n ; i++){
        printf("%d",arr[i]);
    }


}