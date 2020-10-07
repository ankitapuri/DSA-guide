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

  public void radixSortMSD(String[] a) {
    /**
     * Most-significant-digit-first radix sort based on
     * https://www.cs.princeton.edu/courses/archive/spring03/cs226/lectures/radix
     * Assuming that each element in "a" is contains only  number character: 0-9
     * Note that with this MSD radixSort, elements of the array do not need to have same width
     * Note that you are doing radix sorting and not sorting an array. If you use for example {"2", "100"}, the
     * sorted array will be {"100", "2"}
     */
    radixSortMSD(a, 0, a.length, 0);
  }

  private void radixSortMSD(String[] a, int l, int r, int d) {
    if (r -l <= 1) {
      return;
    }
    int n = a.length;
    int[] count = new int[11]; // position 0 are for things that do not have anything
    String[] temp = new String[n];
    for (int i = l; i < r; i++) {
      if (a[i].length() > d){
        char c = a[i].charAt(d);
        int index = (int) (c - '0') + 1;
        count[index]++;
      } else {
        count[0]++;
      }
    }
    // calculate the position of each number
    int toAdd = 1;
    int k = 0;
    int next = 1;
    while ( k < 11) {
      while (k < 11 && count[k] == 0) {
        count[k] = next;
        k++;
      }
      if (k < 11 && count[k] > 0){
        int count_temp = count[k];
        count[k] = next;
        toAdd = count_temp;
        next = count[k] + toAdd;
        k++;
      }
    }
    for (int i = l; i < r; i++) {
      int index;
      if (a[i].length() > d) {
        char c = a[i].charAt(d);
        index = (int) (c - '0') + 1;
      } else {
        index = 0;
      }
      temp[count[index]++ -1 + l] = a[i];
    }
    for (int i = l; i < r; i++) {
      a[i] = temp[i];
    }
    for (int i = 1; i < 10; i++) {
      int left = l + count[i] -1;
      int right = l + count[i + 1]-1;
      if (right -left > 1) {
        radixSortMSD(a, l + count[i] - 1, l + count[i + 1] - 1, d + 1);
      }
    }
  }
  // Driver method to test above
  public static void main(String args[]) {
    RadixSort rs = new RadixSort();
    String[] a = {"64", "34", "25", "12", "22", "11", "90"};
    System.out.printf("Array= %s\n", Arrays.toString(a));
    rs.radixSortLSD(a, 2);
    System.out.printf("Sorted Array (using LSD)= %s\n", Arrays.toString(a));
    String[] b = {"64", "34", "25", "12", "22", "91", "90"};
    System.out.printf("Array= %s\n", Arrays.toString(b));
    rs.radixSortMSD(b);
    System.out.printf("Radix Sorted Array= %s\n", Arrays.toString(b));
    String[] c = {"64", "34", "25", "12", "22", "91", "90","1", "3", "100"};
    System.out.printf("Array= %s\n", Arrays.toString(c));
    rs.radixSortMSD(c);
    System.out.printf("Radix Sorted Array= %s\n", Arrays.toString(c));
  }
}