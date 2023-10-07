#include <stdio.h>
int stack[100],choice=0,n,top=-1;
void push();
void pop();
void show();
void main()
{
printf("Enter the number of elements in the stack : ");
scanf("%d",&n);
printf("&\tStack Operations Using Array\n");
while(choice!=4)
{
printf("\nChoose one from the below options...\n");
printf("\n1) Push\n2) Pop\n3) Show\n4) Exit");
printf("\nEnter your choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1:{
push();
break;
}case 2: {
pop();
break;
} case 3: {
show();
break;
} case 4: {
printf("Exiting...");
break;
} default: {
printf("Please Enter a Valid Choice");
}
}
}
}

void push() {
int val;
if(top==n-1)
printf("\n---------\nStack is Full\n---------\n");
else{
printf("Enter the Value? ");
scanf("%d",&val);
top=top+1;
stack[top]=val;
}
}

void pop()
{
if(top==-1)
printf("Stack is Empty\n");
else
top=top-1;
}

void show()
{
printf("\nStack\n");
for(int i=top;i>=0;i--)
printf("| %d |\n",stack[i]);
if(top==-1)
printf("Stack is Empty\n");
}
