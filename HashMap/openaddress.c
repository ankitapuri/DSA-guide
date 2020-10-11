#include <stdio.h>
#include<stdlib.h>
#define SIZE 15

int h[SIZE]={NULL};

void insert()
{

 int key,in,i,flag=0,hkey;
 printf("\nENTER THE VALUE TO BE INSERTED :\n");
 scanf("%d",&key);
 hkey=key%SIZE;
 for(i=0;i<SIZE;i++)
    {

     in=(hkey+i)%SIZE;

     if(h[in] == NULL)
     {
        h[in]=key;
         break;
     }

    }

    if(i == SIZE)

     printf("\neELEMENT CANNOT BE INSERTED\n");
}
void search()
{

 int key,in,i,flag=0,hkey;
 printf("\nENTER THE ELEMENT :\n");
 scanf("%d",&key);
 hkey=key%SIZE;
 for(i=0;i<SIZE; i++)
 {
    in=(hkey+i)%SIZE;
    if(h[in]==key)
    {
      printf("VALUE IS FOUND AT IN %d",in);
      break;
    }
  }
  if(i == SIZE)
    printf("\n VALUE IS NOT FOUND\n");
}
void displaytable()
{

  int i;

  printf("\nELEMENTS IN HASH TABLE ARE : \n");

  for(i=0;i< SIZE; i++)

  printf("\nAT IN %d \t VALUE =  %d",i,h[i]);

}
main()
{
    int ch,i;
    while(1)
    {
        printf("\n\tOPERATION MENU :\t 1. Insert\t 2. Displaytable\t 3. Search\t 4.Exit");
       printf("\n\tENTER YOUR CHOICE :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insert();
                break;
            case 2:
                displaytable();
                break;
            case 3:
                search();
                break;
            case 4:
exit(0);
        }
    }
}
