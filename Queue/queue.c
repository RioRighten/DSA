#include<stdio.h>
#include<stdlib.h>
#define size 5

int ch, q[size], rear = -1, front = -1;

void Insert_queue();
void Delete_queue();
void Display_queue();

/* Function to create Queue */

void Insert_queue()
{
    if(rear == size -1){
        printf("\n Queue is Overflow");
    }
    else{
        printf("\n Input the element:");
        scanf("%d",&ch);
        rear ++;
        q[rear] = ch;
    }
}

/* Function to perform Deletion Operation */

void Delete_queue(){
    if(front == rear){
        printf("\n Underflor");
    }
    else{
        front++;
        ch=q[front];
        printf("\n Element deleted: %d",ch);
    }
}

/* Function to show Output*/

void Display_queue(){
    int i;
    if(front == rear){
        printf("\n Underflow");
    }
    else{
        for(i=front+1; i<=rear;i++)
            printf("%d",q[i]);
    }
}


void main(){
    int choice;
    while(1){
        printf("\n Insert -> 1 \n Delete -> 2 \n Display -> 3 \n Quit -> 4");
        printf("\n Enter the choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            Insert_queue();
            break;
        case 2:
            Delete_queue();
            break;
        case 3:
            Display_queue();
            break;
        default:
            exit(0);
        }

    }
}