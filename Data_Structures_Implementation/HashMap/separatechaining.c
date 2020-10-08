#include<stdio.h>
#include<stdlib.h>
#define size 15
struct node
{
    int data;
    struct node *next;
};

struct node *chain[size];

void init()
{
    int i;
    for(i = 0; i < size; i++)
        chain[i] = NULL;
}

void insert(int value)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    int key = value % size;
    if(chain[key] == NULL)
        chain[key] = newNode;
    else
    {
        struct node *temp = chain[key];
        while(temp->next)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void display()
{
    int i;
    for(i = 0; i <size; i++)
    {
        struct node *temp = chain[i];
        printf("Arr[%d]-->",i);
        while(temp)
        {
            printf("%d -->",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    int i,n,ch;
    char choice;
    printf("\n ENTER THE NO. OF ELEMENTS :");
    scanf("%d",&n);
    printf("\n ENTER THE ELEMENTS :");
    for(i=0;i<n;++i)
        {
            scanf("%d",&ch);
            insert(ch);
        }
        display();
    return 0;
}
