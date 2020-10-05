#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &arr, int l, int r)
{
    if (l < r){
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void printArray(vector<int> &A, int size){
    int i;
    for (i = 0; i < size; i++)
        cout << A[i] << " ";
    cout << endl;
}

int main(){
    int arr_size;
    vector<int> arr;

    cout << "Enter the number of elements: " << endl;
    cin >> arr_size;
    cout << "Enter the elements you want to sort: " << endl;

    int temp;
    for(int i = 0; i < arr_size; ++i){
        cin >> temp;
        arr.push_back(temp);
    }

    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    cout << endl <<  "Sorted array is:" << endl;
    printArray(arr, arr_size);
    return 0;
}