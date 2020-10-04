import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number of elements of array");  
        int n =sc.nextInt();
        int[] array=new int[n];
        System.out.println("Enter elements of array"); 
        
        for (int i=0;i<n ;i++ ){
            array[i]=sc.nextInt();
        } 
        System.out.println("Enter value to search");  
        
        int element = sc.nextInt();  
        int i;
        for ( i = 0; i < n; i++){  
            if (array[i] == element){
                System.out.println("Element found at index: "+(i+1));  
                break;  
            }  
        }  
        if (i == n)
        System.out.println(element + " not found");  
	}
}

