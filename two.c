#include <stdio.h>
#include <stdlib.h>
#define maxsize 5
void insert();
void delete();
void display();
int front = -1, rear = -1;
int queue[maxsize];

void main() {
    int choice;
    while(choice!=4) {
        printf("\n------MAIN MENU------");
        printf("\n1 - Insert an Element\n2 - Delete an Elment\n3 - Display the Queue\n4 - Exit\n");
        printf("---------------------\n\n");
        printf("Enter Your Choice : ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\nEnter Valid Choice!\n");
        }
    }
}

void insert() {
    int item;
    printf("\nEnter the Element : ");
    scanf("%d",&item);
    if(rear == maxsize - 1) {
        printf("\nQueue is Full\n");
        return;
    }
    if(front == -1 && rear == -1) {
        front = 0;
        rear = 0;
    } else {
        rear = rear + 1;
    }
    queue[rear] = item;
    printf("\nValue Inserted\n");
}

void delete() {
    int item;
    if(front == -1 || front > rear) {
        printf("\nQueue is Empty\n");
        return;
    } else {
        item = queue[front];
        if( front == rear ) {
            front = -1;
            rear = -1;
        } else {
            front = front + 1;
        }
        printf("\nValue Delete\n");
    }
}

void display() {
    int i;
    printf("\n");
    if( rear == -1 ) {
        printf("\nQueue is Empty\n");
    } else {
        for( i = front; i <= rear; i++) {
            printf(" %d |",queue[i]);
        }
    }
    printf("\n");
}
