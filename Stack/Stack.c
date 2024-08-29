#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();
int stk[10];
int top=-1;
int ca;

/*Function to push*/

void push(){
    if(top=9){
        printf("\n Stack Overflow");
        return;
    }
    else{
    printf("Enter the data to push:");
    scanf("%d",&ca);
    stk[top]=ca;
    top++;
    }
}

/*Function to pop*/

void pop(){
    if(top=-1){
        printf("\n Stack Underflow");
        return;
    }
    else{
    printf("\n Popped data= %d",&ca);
    stk[top]=ca;
    top--;
    }
}

/*Function to display*/

void display(){
    int i;
    if(top==-1){
        printf("\n Stack Underflow");
        return;
    }
    else{
        printf("\n Stack elements are:\n");
        for(i=top;i>=0;i--){
            printf("\n %d",stk[i]);
        }
    }
}

int main(){
    int ch;
    while(1){
        printf("\n Push -> 1 \n Pop -> 2 \n Display -> 3 \n Exit -> 4 \n Enter your choice:");
        scanf("%d",&ch);

        switch (ch)
        {
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
            exit(0);
            break;
        }
    }
}