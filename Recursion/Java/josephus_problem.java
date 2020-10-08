import java.util.*;

class Josephus {

static int josephus(int n, int k)
{
if (n == 1)
    return 1;
else
    /* The position returned by josephus(n - 1, k) 
    is adjusted because the recursive call 
    josephus(n - 1, k) considers the original 
    position k%n + 1 as position 1 */
    return (josephus(n - 1, k) + k-1) % n + 1;
}

// Driver Program to test above function
public static void main(String[] args)
{
//Scanner object for capturing the user input
Scanner scanner = new Scanner(System.in);
System.out.println("Enter the number:");
//Stored the entered value in variable
int n = scanner.nextInt();
int k = scanner.nextInt();
//Called the user defined function josh
System.out.println("The chosen place is " + 
                           josephus(n, k));
}
}