//Take as input N, a number. N is the size of a snakes and ladders board. Following strategy has been used to place snakes and ladders on the board –

//a. From lowest to highest prime number there is a ladder

//b. From 2nd highest to 2nd lowest prime number there is a snake E.g. for a board of size 20, the prime numbers are 2, 3, 5, 7, 11, 13, 17, 19 Ladders are from 2 to 19 and 5 to 13 Snakes are from 17 to 3 and 11 to 7

//Now take as input M, another number. Take M inputs now which represent the values on dice for M throws. Write a recursive function which checks if the board (with its snakes and ladders) can be crossed using the M dice values and returns a Boolean value. Print the value returned.



import java.util.Scanner;

public class SnakesAndLadder {

	public static void main(String[] args) {
		
		
		Scanner s = new Scanner(System.in);

		// n is the size of board

		int n=s.nextInt();

		// m is the number of values on dice

		int m=s.nextInt();
		int dices[]= new int[m];
		
		// input values on dice
		
		for(int i=0;i<m;i++)
		{
			dices[i]=s.nextInt();
		}

		// SOE function is the sieve of eratosthenes function. To find all the prime numbers from 1 to n
		// makeSnakesAndLadders creates the sankes and ladder board according to the condition given in the question
		
		int snakeLadder[]= makeSnkesAndLadders(SOE(n));

		// board  checks if the board (with its snakes and ladders) can be crossed using the M dice values and returns a Boolean value. 

		boolean ans=board(0, n, snakeLadder, dices, 0);
		System.out.println(ans);
		
	
	}
	public static boolean board(int curr  , int end , int snakeLadder[] , int dice[] , int vidx)
	{
		// if we have reached the end of the board
		if(curr==end)
		{
			return true;
		}
		// curr beacomes greater than size of the board
		if(curr>end)
		{
			return false;
		}
		// vidx becomes equal to the number of values on the dice
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
				// creating a ladder
				snakeLadder[left]=right;
			}
			
			else
			{
				// creating a snake
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
		//sieve of eratosthenesto find all prime numbers from 1 to n
		boolean prime[]= new boolean[n+1];
		
		for(int p=2; p*p<=n;p++)
		{
			if(prime[p]==true)
			{
				for(int i=p*p;i<=n;i++)
				{
					// if the number is not prime mark it as false
					prime[i]=false;
				}
			}
		}
		
		return prime;
		
		
	}

}
