#include<stdio.h>
#define MAX 20
int top=-1,choice=0,stack[MAX],val,size,i;

void push() {
    if(top==size-1) {
        printf("\nStack is Full");
        return;
    }
    printf("Enter a Value : ");
    scanf("%d",&val);
    stack[++top]=val;
}

void pop() {
    if(top==-1) {
        printf("\nStack is Empty");
        return;
    }
    top=top-1;
}

void display() {
    if(top==-1) {
        printf("\nStack is Empty");
        return;
    }
    for(i=top;i>=0;i--) {
        printf("\n%d",stack[i]);
    }
}

void main() {
    printf("Enter Stack Size : ");
    scanf("%d",&size);

    while(choice!=4) {
        printf("\n1 - Push \n2 - Pop \n3 - Display \n4 - Exit\n");
        printf("Enter Your Choice : ");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            default:
                printf("\nWrong Choice");
        }
    }
}
