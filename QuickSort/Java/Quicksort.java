public class QuickSort {
    public static void sort(int[] arr,int LowerBound,int UpperBound){
    QuickSort sort = new QuickSort();
    if(LowerBound<UpperBound){
        int end  = sort.partition(arr, LowerBound, UpperBound);
        sort(arr, LowerBound, end-1);
        sort(arr, end+1, UpperBound);
    }

}
int partition(int arr[], int LowerBound, int UpperBound) 
{ 
    int pivot = arr[UpperBound];  
    int start= (LowerBound-1);  
    for (int i=LowerBound; i<UpperBound; i++) 
    { 
        if (arr[i] < pivot) 
        { 
            start++; 
            int temp = arr[start]; 
            arr[start] = arr[i]; 
            arr[i] = temp; 
        } 
    }
    int temp = arr[start+1]; 
    arr[start+1] = arr[UpperBound]; 
    arr[UpperBound] = temp; 

    return start+1; 
}
    
