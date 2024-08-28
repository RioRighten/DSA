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

/* Function to perform deletion operation */

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