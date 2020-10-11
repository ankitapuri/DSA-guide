#include<stdio.h>
#include<process.h>

void enqueue(int[],int);
void dequeue(int[]);
void display_Queue(int[],int,int);

int Queue[60],size,front=-1,rear=-1;

int main()
 {
     int item,choice,ret;
     printf("\n ENETR THE SIZE OF QUEUE :");
     scanf("%d",&size);
     printf("\n\n\t\t OPERATION MENU\n\n\t\t  1.ENQUEUE\n\t\t  2.DEQUEUE\n\t\t  3.DISPLAY\n\t\t  4.EXIT ");
     do
     {
        printf("\n\n ENETR YOUR CHOICE : ");
        scanf("%d",&choice);
        switch(choice)
          {
            case 1:
                {
                    printf("\n ENTER THE ITEM :");
                    scanf("%d",&item);
                    enqueue(Queue,item);
                    break;
                }
            case 2:
                {
                   dequeue(Queue);
                   break;
                }
            case 3:
                {
                    display_Queue(Queue,front,rear);
                    break;
                }
            case 4:
            {
                break;
            }
          }
     }while(choice!=4);
     return 0;

 }

 void enqueue(int Queue[],int temp)
  {
      if(rear==size-1)
       {
           printf("\n QUEUE OVERFLOW");
           return ;
       }
      else
        if(rear==-1)
          {
              front=rear=0;
              Queue[rear]=temp;
          }
        else
        {
            rear++;
            Queue[rear]=temp;
        }
  }

  void dequeue(int Queue[])
   {
       if(front==-1)
        {
            printf("\n QUEUE UNDERFLOW");
            return ;
        }
        if(front==rear)
        {
            printf("\n THE DELETED ITEM IS  %d",Queue[front]);
            front=-1;
        }

       else
       {
         printf("\n THE DELETED ITEM IS  %d",Queue[front]);
         front++;
       }
  }

 void display_Queue(int Queue[],int front,int rear)
  {
      if(front==-1)
        printf("\n QUEUE UNDERFLOW");
      else
      {
          printf("\n QUEUE IS :");
          for(int i=front;i<rear;++i)
          {
           printf("%d<- ",Queue[i]);
          }
          printf("%d",Queue[rear]);
      }
  }
