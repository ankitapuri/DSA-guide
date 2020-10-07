//below is the java implementation of the program to find the nth Fibonacci number

import java.util.*;

class fibonacci_numbers {
	//driver method
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("enter a number : ");
		int n = sc.nextInt();
		System.out.println(fib(n));
	}
	//utility program to find the nth Fibonacci number
	public static int fib(int n) {
		//here first we will define the array of size n+1
		//because if we want to compute the ith fibonacci value then we need (i-1)th and (i-2)th value.
		int[] arr = new int[n+1];

		//arr[0] is already initialized with 0 so we just need to initialize the arr[1] with 1
		arr[1] = 1;
		
		//here we are not using the recursive method to compute the previous values but we are storing the previously computed values and thus using the overlapping substructure property of dynamic programming
		for(int i=2; i<=n; i++)
			//the formula of the fibonacci numbers
			arr[i] = arr[i-1] + arr[i-2];
		return arr[n];
	}	
}