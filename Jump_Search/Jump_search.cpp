#include<iostream>
#include<cmath>

using namespace std;
int jumpSearch(int array[], int size, int key) {
   int start = 0;
   int end = sqrt(size); //the square root of array length

   while(array[end] <= key && end < size) {
      start = end; //it it is not correct block then shift block
      end += sqrt(size);
      if(end > size - 1)
         end = size; //if right exceeds then bound the range
   }

   for(int i = start; i<end; i++) { //perform linear search in selected block
      if(array[i] == key)
         return i; //the correct position of the key
   }
   return -1;
}

int main() {
   int n, searchKey, loc;
   cout << "Enter total number of items: ";
   cin >> n;
   int arr[n]; //create an array of size n
   cout << "Enter the items: " << endl;

   for(int i = 0; i< n; i++) {
      cin >> arr[i];
   }

   cout << "Enter search key to search in the list: ";
   cin >> searchKey;
   if((loc = jumpSearch(arr, n, searchKey)) >= 0)
      cout << "Key found at location: " << loc << endl;
   else
      cout << "Key is not found in the list." << endl;
}
