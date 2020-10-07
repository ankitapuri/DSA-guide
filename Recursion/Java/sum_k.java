/***
 * sum_k program implements the code to print all the subsets of the given array
 * whose sum equals k.
 * 
 * eg.	arr = {1,2,3,4}
 * 		k = 4;
 * 
 * 		Subsets whose sum equals k are {4}, {1,3}
 */


import java.util.Scanner;

public class sum_k {

	public static void main(String[] args) {
		
		Scanner s = new Scanner(System.in);
		
		//Enter size of the array
		int n = s.nextInt();
		
		//Enter value of k
		int k = s.nextInt();
		
		//Enter array values
		int[] arr = new int[n];
		for(int i = 0;i < n;i++) {
			arr[i] = s.nextInt();
		}
		
		//Function call 
		int[][] ans = subsetsSumK(arr, k);
		
		//Print the values of subsets
		for(int i = 0;i <ans.length;i++) {
			for(int j = 0;j <ans[i].length;j++)
				System.out.print(ans[i][j] + " ");
			System.out.println();
		}
		
		s.close();
	}
	
	
	/***
	 * 
	 * @param input: input array
	 * @param k: target sum value
	 * @return: 2D array containing all the subsets of input array whose sum equals k
	 */
	public static int[][] subsetsSumK(int input[], int k) {

		  //get all the subsets of given input array
	      int[][] arr = sub(input,0,k);
	     
	      //return subsets whose sum of elements equals k
	      return subSumK(arr,k,0);
	}
	  

	/***
	 *  
	 * @param input: input array
	 * @param index: index value to be considered in input array
	 * @param k: target sum value
	 * @return: 2D array of all the subsets of given input array
	 */
	public static int[][] sub(int[] input,int index,int k){
	      
	      if(index == input.length){
	        int[][] arr = new int[1][0];
	        return arr;
	      }
	      
	      int[][] smallAns = sub(input,index+1,k);
	      
	      int[][] result = new int[smallAns.length*2][];
	      
	      for(int i = 0;i < smallAns.length;i++){
	        result[i] = new int[smallAns[i].length];
	        int sum = 0;
	        for(int j = 0;j < result[i].length;j++){
	          result[i][j] = smallAns[i][j];
	          sum = sum + result[i][j];
	        }
	        if(sum == k) {
	        	int[][] finalAns = null;
	        }
	      }
	      
	      for(int i = 0;i < smallAns.length;i++){
	        result[i+smallAns.length] = new int[smallAns[i].length+1];
	        result[i+smallAns.length][0] = input[index];
	        for(int j = 1;j < result[i+smallAns.length].length;j++){
	          result[i+smallAns.length][j] = smallAns[i][j-1];
	        }
	      }
	      return result;
	 }
	  

	/***
	 * 
	 * @param arr: 2D array of all the subsets of given input array
	 * @param k: target sum value
	 * @param index: index value 
	 * @return: 2D array containing all the subsets of input array whose sum equals k
	 */
	public static int[][] subSumK(int[][] arr,int k,int index){
	      
	      
	      if(index == arr.length){
	        int[][] array = new int[0][0];
	        return array;
	      }
	      
	      int[][] smallAns = subSumK(arr,k,index+1);
	      int sum = 0;
	      for(int i = 0;i < arr[index].length;i++){
	        sum = sum + arr[index][i];
	      }
	      if(sum == k){
	        int[][] result = new int[smallAns.length+1][];
	        result[0] = new int[arr[index].length];
	        for(int j = 0;j < result[0].length;j++){
	          result[0][j] = arr[index][j];
	        }
	        for(int m = 0;m < smallAns.length;m++){
	          result[m+1] = new int[smallAns[m].length];
	          for(int l = 0;l < result[m+1].length;l++){
	            result[m+1][l] = smallAns[m][l];
	          }
	        }
	        return result;
	      }
	      return smallAns;
	 }
	
}