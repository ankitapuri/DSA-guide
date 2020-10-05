
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Your unsorted array: ";    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }    
    cout << endl;

    make_heap(arr.begin(), arr.end()); 
    sort_heap(arr.begin(), arr.end());

    cout << "Your sorted array: "; 
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}