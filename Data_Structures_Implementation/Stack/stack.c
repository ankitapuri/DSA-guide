#include<stdio.h>
#include<stdlib.h>
#include<process.h>


int stack[100],size,top=-1;
int newstack[100],ntop=-1;

void push_stack(void);
void pop_stack(void);
void display_stack(int[],int);
int retrieve_ele(int[],int);
void retain_odd(int []);

int main()
{
    int choice,m,ret;
    printf("\n ENTER THE SIZE OF STACK:");
    scanf("%d",&size);
        printf("\n\t        STACK OPERATIONS ");
        printf("\n\t--------------------------------");
        printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.RETRIEVE AN ELEMENT\n\t 5.RETAIN ODD POSITION ELEMENTS\n\t 6.EXIT");
        do
         {
        printf("\n ENTER YOUR CHOICE :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push_stack();
                break;
            }
            case 2:
            {
                pop_stack();
                break;
            }
            case 3:
            {
                display_stack(stack,top);
                break;
            }
            case 4:
            {
                printf("\n ENTER THE VALUE OF m :");
                scanf("%d",&m);
                ret=retrieve_ele(stack,m);
                printf("THE Mth ELEMENT IS  %d",ret);
                printf("\nTHE NEW STACK WITHOUT ITS TOP M-1 ELEMENTS IS");
                for(int i=ntop;i>=0;++i)
                {
                    printf("%d",newstack[i]);
                }
                break;
            }

            case 5:
            {
                retain_odd(stack);
                display_stack(newstack,ntop);
                break;
            }
            case 6:
            {
                printf("\n\t EXIT POINT ");
                exit(100);
            }
        }
    }
    while(choice!=4);
    return 0;
}
void push_stack()
{
    int temp;
    if(top>=size-1)
    {
        printf("\n\tSTACK OVERFLOW\n");

    }
    else
    {
        printf(" ENETR THE VALUE TO BE PUSHED :");
        scanf("%d",&temp);
        top++;
        stack[top]=temp;
    }
}
void pop_stack()
{
    if(top<=-1)
    {
        printf("\n\t STACK UNDERFLOW\n");
    }
    else
    {
        printf("\n\t THE POPPED ELEMENT IS %d",stack[top]);
        top--;
    }
}
void display_stack(int dstack[],int dtop)
{
    if(dtop==-1)
    {
        printf("\n THE STACK IS EMPTY");

    }
    else
    {
     printf("\n THE STACK IS \n");
     printf("%d<-",dstack[dtop]);
     for(int i=dtop-1; i>=0; i--)
        printf("\n%d",dstack[i]);
    }

}

int retrieve_ele(int stack[],int m)
{
    for(int i=0;i<(size-m+1);++i)
    {
        ntop++;
        newstack[ntop]=stack[i];
    }
    return(stack[size-m]);
}

void retain_odd(int stack[])
{
    for(int i=0;i<size;++i)
    {
        if(i%2==0)
            continue;
        else
        {
            ntop++;
            newstack[ntop]=stack[i];
        }
    }
}
