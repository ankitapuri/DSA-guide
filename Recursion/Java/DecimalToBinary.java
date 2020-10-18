/* Ajava program to convert a Decimal to Binary format using Recursion*/
public class DecimalBinary {
    public static int binary(int n,int b)
    {
        //base case
        if(n<b)
            return n;
        else
        {
            //Recurse for subproblem
         return 10 * binary((int)n/b,b)+(n%b);   
        }
    }
    public static void main(String x[])
    {
        //Decimal Value = 12, base 2 for binary
        System.out.println(binary(12,2));
    }
}
