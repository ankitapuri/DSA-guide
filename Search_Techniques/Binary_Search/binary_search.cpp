#include <iostream>
#include<stdlib.h>

#define MAX_SIZE 5

using namespace std;

int main() {
    int arr_search[MAX_SIZE], i, element;
    int f = 0, r = MAX_SIZE;

    cout << "Simple C++ Binary Search Example - Array\n";
    cout << "\nEnter " << MAX_SIZE << " Elements for Searching : " << endl;
    for (i = 0; i < MAX_SIZE; i++)
        cin >> arr_search[i]; // it will take input upto value of MAX_SIZE  

    cout << "\nYour Data   :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << arr_search[i]; // print the entered data
    }

    cout << "\nEnter Element to Search : ";
    cin>>element; // taking input key


    while (f <= r)  { // it will run the loop while value of f is less than or equal to the value of r
        int mid = (f + r) / 2;

        if (arr_search[mid] == element) {
            cout << "\nSearch Element  : " << element << " : Found :  Position : " << mid + 1 << ".\n";
            break; // if the element is found break the loop and print the required result
        } else if (arr_search[mid] < element)
            f = mid + 1; // if the value of arr_search at mid is less than element increase the value of f by mid+1
        else
            r = mid - 1;// else element decrease the value of f by mid-1
    }

    if (f > r)
        cout << "\nSearch Element : " << element << "  : Not Found \n"; // if f>r then print not found as our result

        return 0;

}
