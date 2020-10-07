//below is the java implementation of the program to find the nth Fibonacci number

import java.util.*;

class fibonacci_numbers {
	//driver method
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		System.out.println(fib(n));
	}
	//utility program to find the nth Fibonacci number
	public static int fib(int n) {
		int[] arr = new int[n+1];
		arr[1] = 1;
		for(int i=2; i<=n; i++)
			arr[i] = arr[i-1] + arr[i-2];
		return arr[n];
	}	
}