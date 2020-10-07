import java.util.Scanner;

public class SnakesAndLadder {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner s = new Scanner(System.in);
		int n=s.nextInt();
		int m=s.nextInt();
		int dices[]= new int[m];
		for(int i=0;i<m;i++)
		{
			dices[i]=s.nextInt();
		}
		int snakeLadder[]= makeSnkesAndLadders(SOE(n));
		boolean ans=board(0, n, snakeLadder, dices, 0);
		System.out.println(ans);
		
	
	}
	public static boolean board(int curr  , int end , int snakeLadder[] , int dice[] , int vidx)
	{
		if(curr==end)
		{
			return true;
		}
		if(curr>end)
		{
			return false;
		}
		if(vidx==dice.length)
		{
			return false;
		}
		if(snakeLadder[curr]!=0)
		{
			return board(snakeLadder[curr], end, snakeLadder, dice, vidx);
		}
		else
		{
			return board(curr+dice[vidx], end, snakeLadder, dice, vidx+1);
		}
	}
	public static int[]  makeSnkesAndLadders(boolean[] prime)
	{
		int left=0;
		int right=prime.length-1;
		int count=1;
		int snakeLadder[]= new int[prime.length];
		while(left<right )
		{
			while(left<prime.length&&prime[left]==false )
			{
				left++;
			}
			while( right>=0&&prime[right]==false)
			{
				right--;
			}
			if(count%2==1 && left<prime.length)
			{
				snakeLadder[left]=right;
			}
			
			else
			{
				if(right>=0)
				{
					snakeLadder[right]=left;
				}
				
			}
			count++;
			left++;
			right--;
		}
		return snakeLadder;
	}
	public static boolean[] SOE(int n)
	{
		boolean prime[]= new boolean[n+1];
		
		for(int p=2; p*p<=n;p++)
		{
			if(prime[p]==true)
			{
				for(int i=p*p;i<=n;i++)
				{
					prime[i]=false;
				}
			}
		}
		
		return prime;
		
		
	}

}
