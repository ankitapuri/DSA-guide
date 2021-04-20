// C++ program to create Special triangle. 
#include<bits/stdc++.h> 
using namespace std; 
  
// Function to generate Special Triangle 
void printTriangle(int A[] , int n) 
    { 
        // Base case 
        if (n < 1) 
            return; 
  
        // Creating new array which contains the 
        // Sum of consecutive elements in 
        // the array passes as parameter. 
        int temp[n - 1]; 
        for (int i = 0; i < n - 1; i++) 
        { 
            int x = A[i] + A[i + 1]; 
            temp[i] = x; 
        } 
  
        // Make a recursive call and pass 
        // the newly created array 
        printTriangle(temp, n - 1); 
  
        // Print current array in the end so 
        // that smaller arrays are printed first 
        for (int i = 0; i < n ; i++) 
        { 
            if(i == n - 1) 
                cout << A[i] << " "; 
            else
            cout << A[i] << ", "; 
        } 
                  
        cout << endl; 
    } 
  
    // Driver function 
    int main() 
    { 
        int A[] = { 1, 2, 3, 4, 5 }; 
        int n = sizeof(A) / sizeof(A[0]); 
          
        printTriangle(A, n); 
    } 
      
// This code is contributed by Smitha Dinesh Semwal 
