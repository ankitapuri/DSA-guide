#include<stdio.h>

void Counting_sort(int arr[],int n,int place)
{
    int output[n];
    int count[10];
    int i = 0;
    int ele;

    //sets the frequency of all the digits from 0-9 to 0
    for(i=0; i<10; ++i)
    {
        count[i] = 0;
    }

    //increments the frequency of all the digits
    for(i=0; i<n; ++i)
    {
        ele = arr[i]/place;
        count[ele%10] += 1;
    }

    //cumlative frequency to get the exact index
    for(i=0; i<8; ++i)
    {
        count[i+1] += count[i];
    }

    // copying the elements into the output array based on the index from the count array
    i = n - 1;
    while(i >= 0)
    {
        ele = arr[i]/place;
        output[count[ele% 10] - 1] = arr[i];
        count[ele % 10] -= 1;
        i -= 1;
    }

    // copying the array output into arr
    for(i=0;i<n;++i)
        arr[i] = output[i];
}

int main()
{
    int n;
    int i;
    int max = -1;

    printf("Enter the number of element in the array:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of the array \n");

    // Reads the elements into the array and sets the maximum element at the same time
    // (Assuming that all the elements are positive)
    for(i=0; i<n; ++i)
    {
        scanf("%d",arr+i);
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    //For every decimal place counting sort is called
    i = 1;
    while(max/i > 0)
    {
        Counting_sort(arr,n,i);
        i *= 10;
    }

    printf("After sorting the array\n");
    for(i=0;i<n;++i)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}