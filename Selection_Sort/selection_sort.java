import java.util.Arrays;
import java.util.Scanner;

class SelectionSort {
	private static Scanner sc;

	public static void main(String args[]) {
		sc = new Scanner(System.in);

		System.out.println("Enter the number of elements");
		int n = sc.nextInt();

		System.out.println("Enter the elements");
		int arr[] = new int[n];
		for (int i = 0; i < n; i++)
			arr[i] = sc.nextInt();


		sort(arr);

		System.out.println("The sorted array is:");
		System.out.println(Arrays.toString(arr));
	}

	static void sort(int arr[]) {

		for (int i = 0; i < arr.length - 1; i++) {
			
			int k = i;
			for (int j = i + 1; j < arr.length; j++)
				if (arr[j] < arr[k])
					k = j;
			if (i != k) {
				int temp = arr[i];
				arr[i] = arr[k];
				arr[k] = temp;
			}
		}
	}
}