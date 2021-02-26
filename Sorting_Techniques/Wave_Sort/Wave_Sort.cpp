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
    int l;
    cout<<"Enter limit";
    cin>>l;
    int arr[l];
    cout<<"Enter elements";
    for(int i=0;i<l;i++){
        cin>>arr[i];
    }
    wavesort(arr,l);
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}