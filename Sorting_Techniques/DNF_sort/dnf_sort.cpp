#include <iostream>

using namespace std;

//function to swap elements in array
void swap(int arr[], int i, int j){
    int temp = arr[i]; // store i in temp
    arr[i] = arr[j]; // store j in i
    arr[j] = temp; // store temp in j and swapping gets completed
}

// function for sorting 0's,1's and 2's also called as DNF sorting
void dnfSort(int arr[], int n) // we are passing array and length_of_array
{
    // initialize variable low and mid with 0 and high with length_of_array-1
    // low and mid pointer will point at start of array whereas high pointer will point at end of array
    int low = 0;
    int mid = 0;
    int high = n-1;

    // Here we will be checking value of arr[mid]
    // low pointer signifies from where our 1's will start
    // high pointer signifies from where our 2's will start
    // mid pointer signifies from where our unknown region will start
    while(mid<=high){
        if(arr[mid]==0) // if 0, swap arr[low] and arr[high] and increment value of low and mid by 1
        {
            swap(arr,low,mid);
            low++;
            mid++;
        }
        else if(arr[mid]==1) // if 1, increment value of mid by 1
        {  
            mid++;
        }
        else // if 2, swap arr[mid] and arr[high] and then decrement value of high by 1
        {
            swap(arr,mid,high);
            high--;
        }
    }
}

//main function
int main()
{
    int n; //initialize an integer variable n which will be used to get length of array
    cout<<"Enter size of array "; // display text
    cin>>n; // take input of user in variable n
    int arr[n]; // initialize an integer array with length n
    
    for(int i=0;i<n;i++) // for loop to take user inputs in array for sorting it
    {
        cin>>arr[i];
    }
    dnfSort(arr,n); // function call 

    for(int i=0;i<n;i++) // for loop to display output after sorting
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}