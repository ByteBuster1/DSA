#include<stdio.h>
#define max 100 
int top = -1 ;
int stack[max];

void peek(){
    if(top==-1){
        printf("stack is empty ");
    }
    else {
         printf("Top element is: %d\n",stack[top]);
    }
}
void push(int value){
    if(top==max-1){
        printf("Stack is overflow");
    }
    else{
        top++;
        stack[top]=value;
        printf("%d is inserted:\n",value);
    }
}
void display(){
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        int i ;
        for( i = top ; i >= 0;i--){
            printf("stack item = %d \n",stack[i]);
        }
}
}
void pop(){
    if(top==-1){
        printf("stack is underflow");
    }
    else{
        printf("element deleted %d",top);
        top--;
    }
}
int main(){
    int value ,ch ;
    while(1){
        printf("1)Push 2)Pop 3)Peek 4)Display");
        printf("\nEnter the choice: ");
        scanf("%d",&ch);
        switch(ch){

            case 1 : printf("Enter the value: ");
                     scanf("%d",&value);
                     push(value);
                     break;
            
            case 2 : pop();
                     break ;

            case 3 : peek();
                     break;
            
            case 4 : display();
                     break ; 

            default : printf("Invalid choice\n");
                      break ;
        }
    }

}