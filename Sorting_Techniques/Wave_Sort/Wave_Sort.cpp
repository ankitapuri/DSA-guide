#include <iostream>

using namespace std;

void swap(int arr[],int i,int j) // swap function
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


void wavesort(int arr[], int n) //wavesort function :Here, we pass our array and its length
{
    for(int i=1;i<n;i+=2) // We have to check alternate element so i is incremented by 2
    {
        if(arr[i]>arr[i-1]) // Check whether previous element is greater or not 
        {
            swap(arr,i,i-1); //swap i with i-1
        }
        if(arr[i]>arr[i+1] && i<=n-2) // if it goes to n-1 , we will be not able check element after and it will throw error
        {
            swap(arr,i,i+1); // swap i with i+1
        }
        
    }
}

int main()
{
    int arr[] = {1,3,4,7,5,6,2}; //Test case
    wavesort(arr,7); //passing array and length of array
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}