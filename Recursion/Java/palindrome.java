import java.util.*;

class Palindrome{
   public static void main(String args[]){
      //Scanner object for capturing the user input
      Scanner scanner = new Scanner(System.in);
      System.out.println("Enter the number:");
      //Stored the entered value in variable
      String str = scanner.next();
      //Called the user defined function pal
      boolean ans = pal(str,0,str.length()-1);
      System.out.println("the no is palindrome? = "+ans);
   }
   static boolean pal(String s,int start,int end)
   {
       // If there is only one character 
     if(start==end)
     {
         return true;
     }
     // If first and last 
    // characters do not match 
     if(s.charAt(start)!=str.charAt(end))
     {
         return false;
     }
     if(start<end)
     return pal(s,start+1,end-1);

     return true;
   }
}