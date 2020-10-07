import java.util.*;

class FibonacciDemo{
   public static void main(String args[]){
      //Scanner object for capturing the user input
      Scanner scanner = new Scanner(System.in);
      System.out.println("Enter the number:");
      //Stored the entered value in variable
      int num = scanner.nextInt();
      //Called the user defined function
      int nth_fibo = fibo(num);
      System.out.println("NTH FIBONAACI IS : "+nth_fibo);
   }
   static int fibo(int n)
   {
       if(n==0 || n==1)
       {
           return n;
       }
       return fibo(n-1)+fibo(n-2);
   }
}