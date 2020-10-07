import java.util.Scanner;

public class sum_k {

	public static void main(String[] args) {
		
		Scanner s = new Scanner(System.in);
		
		//Size of the array
		int n = s.nextInt();
		
		//value of k
		int k = s.nextInt();
		
		int[] arr = new int[n];
		for(int i = 0;i < n;i++) {
			arr[i] = s.nextInt();
		}
		int[][] ans = subsetsSumK(arr, k);
		for(int i = 0;i <ans.length;i++) {
			for(int j = 0;j <ans[i].length;j++)
				System.out.print(ans[i][j] + " ");
			System.out.println();
		}
		s.close();
	}

		public static int[][] subsetsSumK(int input[], int k) {

	      int[][] arr = sub(input,0,k);
	      
	      return subSumK(arr,k,0);
		}
	  
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
	        	int[][] finalAns = get(result[i]);
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
	  
	    public static int[][] get(int[] is) {
	    	
		return null;
	}

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