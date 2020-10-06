/**
 * Java Implementation for LSD Radix Sort
 */
import java.util.Arrays;

public class RadixSort
{
  public void radixSortLSD(String[] a, int w) {
    /**
     * Least-significant-digit-first radix sort. Assuming fix-length keys (w) and
     * keys based on radix r. Assuming that keys are composed of numbers 0-9
     * @param a   Array to be sorted.
     * @param w   Size element of array. All elements have the same size.
     */
    int n = a.length;
    int r = 10; // representing number 0-9
    String[] temp = new String[n];
    // sorting from right to left (lsd)
    for (int d = w-1; d >= 0; d--) {
        int[] count = new int[r];
        for (int i = 0; i < n; i++) {
          char c = a[i].charAt(d);
          int index = (int)(c - '0');
          count[index]++;
        }
        // calculate the position of each number
        int toAdd = 1;
        for (int k = 1; k < 10; k++) {
          if (count[k] == 0){
            count[k] = count[k-1];
          } else {
            int count_temp = count[k];
            count[k] = count[k - 1] + toAdd;
            toAdd = count_temp;
          }
        }
        // finally move elements to the correct spot for the current d position
        for (int i = 0; i < n; i++) {
          char c = a[i].charAt(d);
          int index = (int)(c - '0');
          temp[count[index]++ - 1] = a[i];
        }
        for (int i = 0; i < n; i++) {
          a[i] = temp[i];
        }
    }
  }

  // Driver method to test above
  public static void main(String args[]) {
    RadixSort rs = new RadixSort();
    String[] a = {"64", "34", "25", "12", "22", "11", "90"};
    System.out.printf("Array= %s\n", Arrays.toString(a));
    rs.radixSortLSD(a, 2);
    System.out.printf("Sorted Array= %s\n", Arrays.toString(a));
  }
}