// C PROGRAM TO IMPLEMENT HEAP SORT

#include <stdio.h>
void main()
{
    int heap[100], no, i, j, c, r, temp;
 
    printf("\n Enter no of elements :");
    scanf("%d", &no);
    printf("\n Enter the nos : ");
    for (i = 0; i < no; i++)
       scanf("%d", &heap[i]);
    for (i = 1; i < no; i++)
    {
        c = i;
        do
        {
            r = (c - 1) / 2;             
            if (heap[r] < heap[c])
            {
                temp = heap[r];
                heap[r] = heap[c];
                heap[c] = temp;
            }
            c = r;
        } while (c != 0);
    }
 
    printf("Heap array : ");
    for (i = 0; i < no; i++)
        printf("%d\t ", heap[i]);
    for (j = no - 1; j >= 0; j--)
    {
        temp = heap[0];
        heap[0] = heap[j]; 
        heap[j] = temp;
        r = 0;
        do 
        {
            c = 2 * r + 1;    
            if ((heap[c] < heap[c + 1]) && c < j-1)
                c++;
            if (heap[r]<heap[c] && c<j)  
            {
                temp = heap[r];
                heap[r] = heap[c];
                heap[c] = temp;
            }
            r = c;
        } while (c < j);
    } 
    printf("\n The sorted array is : ");
    for (i = 0; i < no; i++)
       printf("\t %d", heap[i]);
}
 
