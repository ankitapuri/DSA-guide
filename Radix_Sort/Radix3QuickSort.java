import java.util.*;

/**
 * Based on https://algs4.cs.princeton.edu/51radix/Quick3string.java.html
 */
class Radix3QuickSort {
  private static final int CUTOFF =  10;   // cutoff to insertion sort

  public void sort(String[] a){
    shuffle(a);
    sort(a, 0, a.length-1, 0);
  }

  private void sort(String[] a, int l, int r, int d){
    if (r <= l + CUTOFF){
      insertionSort(a, l, r, d); // save recursion;
      return;
    }
    int lt = l;
    int gt = r;
    int v = getChar(a[l], d);
    int i = lt + 1;
    // Separating a into 3 areas:
    // a[l..lt-1] < v = a[lt..gt] < a[gt+1..r].
    while (i <= gt){
      int c = getChar(a[i], d);
      if (c < v){
        exchange(a, lt++, i++);
      } else if ( c > v){
        exchange(a, i, gt--);
      } else {
        i++;
      }
    }
    // sort each of the 3 divisions
    sort(a, l, lt-1, d);
    if (v >= 0){
      sort(a, lt, gt, d+1);
    }
    sort(a, gt+1, r, d);
  }

  private void insertionSort(String[] a, int l, int r, int d){
    for (int i = l; i <= r; i++){
      for (int j = i; j > l && less(a[j], a[j-1], d); j--){
        exchange(a, j, j-1);
      }
    }
  }

  private void exchange(String[] a, int i, int j){
    String temp = a[i];
    a[i] = a[j];
    a[j] = temp;
  }
  private int getChar(String a, int pos){
    if (pos == a.length()){
      return -1;
    }
    return a.charAt(pos);
  }

  private boolean less(String v, String w, int d){
    /**
     * Return true if v < w starting at position d
     */
    return v.substring(d).compareTo(w.substring(d)) < 0;
  }
  private void shuffle(String[] a){
    List<String> aList = Arrays.asList(a);
    Collections.shuffle(aList);
    aList.toArray(a);
  }

  public static void main(String args[]) {
    Radix3QuickSort rs = new Radix3QuickSort();
    String s = "She sells seashell on the seashore The shells she sells are seashells Im sure";
    String[] a = s.toLowerCase().split(" ");
    System.out.println(Arrays.toString(a));
    rs.sort(a);
    System.out.printf("Sorted: %s\n",Arrays.toString(a));
    String[] c = {"64", "34", "25", "12", "22", "91", "90","1", "3", "100"};
    System.out.println(Arrays.toString(c));
    rs.sort(c);
    System.out.printf("Sorted: %s\n",Arrays.toString(c));
  }
}