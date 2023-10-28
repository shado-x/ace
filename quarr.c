#include<stdio.h> 
#include<stdlib.h> 
#define maxsize 20
int front = -1, rear = -1, queue[maxsize],choice, val, size;
 
void enqueue() 
{ 
    int val; 
    if(rear == size - 1) 
    { 
        printf("\nQueue is Full\n"); 
        return; 
    } 
    if(front == -1 && rear == -1) 
    { 
        front = 0; 
        rear = 0; 
    } 
    else 
    { 
        rear = rear+1; 
    } 
    
    printf("\nEnter the element "); 
    scanf("\n%d",&val); 
    queue[rear] = val; 
    printf("\nValue Enqueued "); 
} 

void dequeue() 
{ 
    int val; 
    if (front == -1 || front > rear) 
    { 
        printf("\nQueue is Empty\n"); 
        return; 
    } 
    else 
    { 
        if(front == rear) 
        { 
            front = -1; 
            rear = -1 ; 
        } 
        else 
        { 
            front = front + 1; 
        } 
    printf("\nvalue Dequeued "); 
    } 
} 

void display() 
{ 
    int i; 
    if(rear == -1) 
    { 
        printf("\n Queue is Empty\n"); 
    } 
    else 
    { 
        printf("\nprinting values .....\n"); 
        for(i=front;i<=rear;i++) 
        { 
            printf("\n%d\n",queue[i]); 
        } 
    } 
} 

void main () 
{ 
    
    printf("Queue Size : ");
    scanf("%d",&size);
    while(choice != 4) 
    { 
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n"); 
        printf("\nEnter your choice? "); 
        scanf("%d",&choice); 
        switch(choice) 
        { 
            case 1: 
                enqueue(); 
                break; 
            case 2: 
                dequeue(); 
                break; 
            case 3: 
                display(); 
                break; 
            default: 
                printf("\nEnter valid choice!\n"); 
        } 
    } 
    printf("Exiting...");
} 
