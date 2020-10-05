import java.io.*;
import java.util.*;

class Reader {
  static BufferedReader reader;
  static StringTokenizer tokenizer;
  static void init(InputStream input) {
      reader = new BufferedReader(
                   new InputStreamReader(input) );
      tokenizer = new StringTokenizer("");
  }
  static String next() throws IOException {
      while ( ! tokenizer.hasMoreTokens() ) {
          tokenizer = new StringTokenizer(
                 reader.readLine() );
      }
      return tokenizer.nextToken();
  }
  static int nextInt() throws IOException {
      return Integer.parseInt( next() );
  }
  static long nextLong() throws IOException {
      return Long.parseLong( next() );
  }    
  static double nextDouble() throws IOException {
      return Double.parseDouble( next() );
  }
}




public class Main {
	
	static void findPrefixS(long[] arr, long no, long prefixSum[])
    {
        prefixSum[0] = arr[0];
        int i = 1;
        while(i < no) {
            prefixSum[i] = prefixSum[i-1] + arr[i];
            i++;
        }
    }
	
    
    static void merge(long[] subsetSum, int l, int m, int r)
    {
        int n1 = m - l + 1;
        int n2 = r - m;
 
        int L[] = new int [n1];
        int R[] = new int [n2];
 

        for (int i=0; i<n1; ++i)
            L[i] = (int) subsetSum[l + i];
        for (int j=0; j<n2; ++j)
            R[j] = (int) subsetSum[m + 1+ j];
 

        int i = 0, j = 0;
 
        int k = l;
        while (i < n1 && j < n2)
        {
            if (L[i] >= R[j])
            {
                subsetSum[k] = L[i];
                i++;
            }
            else
            {
                subsetSum[k] = R[j];
                j++;
            }
            k++;
        }
 
        while (i < n1)
        {
            subsetSum[k] = L[i];
            i++;
            k++;
        }
 
        while (j < n2)
        {
            subsetSum[k] = R[j];
            j++;
            k++;
        }
    }
 

    static void sort(long[] subsetSum, int l, int r)
    {
        if (l < r)
        {
            int m = (l+r)/2;
 
            sort(subsetSum, l, m);
            sort(subsetSum , m+1, r);
            merge(subsetSum, l, m, r);
            
        }
    }
    
    
    
	
    public static void main(String[] args) throws IOException {
    	Reader.init(System.in);
		int t = Reader.nextInt();
		for(int test = 0; test < t; test++) {
			int n = Reader.nextInt();
			long k = Reader.nextLong();
			long arr[] = new long[(int) n];
			for(int x = 0 ; x < n ; x++) {
				arr[x] = Reader.nextLong();
			}
			long prefixSum[] = new long[(int) n];     
	        findPrefixS(arr, n, prefixSum);
	        long subsetsize = (n*(n+1))/2;
	        long subsetSum[] = new long[(int) subsetsize];
	        long counter = 0;
	        
	        for(int y = 0; y < n; y++) {
	        	for(int x = y; x < n; x++) {
	        		if(y == 0) {//x == y
	        			subsetSum[(int) counter] = prefixSum[x];//y
	        			counter++;
	        		}
	        		else {
	        			subsetSum[(int) counter] = prefixSum[x] - prefixSum[y-1];//y
	        			counter++;
	        		}
	        	}
	        }
	        
	        sort(subsetSum,0,subsetSum.length-1);
	        for(int z = 0; z < k; z++) {
	        	System.out.print(subsetSum[z] + " ");
	        }
	        
	        System.out.println();
	        
		}
        
    }
 
}
